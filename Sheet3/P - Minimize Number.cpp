#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    int flag = 1;
    for (int i = 0 ; i < n ; i++){
        if (i == (n-1) && flag == 1){
            cnt++;
            for (int j = 0 ; j < n ; j++){
                arr[j] = arr[j] / 2;
            }
            i = 0;
        }
        if (arr[i] % 2 != 0){
            flag = 0;
        }
    }
    cout << cnt;
 
 
return 0;
}
