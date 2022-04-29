#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
 
    long long sum = 0;
 
    for (int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    cout << abs(sum);
 
return 0;
}
