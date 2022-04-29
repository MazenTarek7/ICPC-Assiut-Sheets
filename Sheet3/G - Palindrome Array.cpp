#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    long long palin[n];
    int k = 0;
    for (int i = n-1 ; i >= 0 ; i--){
        palin[k] = arr[i];
        k++;
    }
    int flag = 1;
    for (int i = 0 ; i < n ; i++){
        if (palin[i] != arr[i]){
            flag = 0;
        }
    }
    if (flag == 1)
        cout << "YES";
    else if (flag == 0)
        cout << "NO";
 
 
return 0;
}
