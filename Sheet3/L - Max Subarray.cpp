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
        for (int i = 0 ; i < n ; i++){
            for (int j = i ; j < n ; j++){
                    int mx = -1000000;
                for (int k = i ; k <= j ; k++){
                    mx = max(mx , arr[k]);
                }
                cout << mx << " ";
            }
        }
        cout << endl;
    }
 
return 0;
}
