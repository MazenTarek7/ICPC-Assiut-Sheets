#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    int n;
    while (t--){
        cin >> n;
        int arr[n];
        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 0 ; i < n ; i++){
            for (int j = i ; j < n ; j++){
                    int flag = 1;
                for (int k = i ; k < j ; k++){
                    if (arr[k] > arr[k+1])
                        flag = 0;
                }
                if (flag == 1)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
 
 
return 0;
}
