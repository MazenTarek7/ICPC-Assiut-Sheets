#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
    long long arr[n];
    long long x;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cin >> x;
    long long found = -1;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] == x){
            found = i;
            break;
        }
    }
    cout << found;
 
return 0;
}
