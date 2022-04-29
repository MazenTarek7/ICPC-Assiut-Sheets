#include<bits/stdc++.h>
 
using namespace std;
 
long long getFib(long long dp[] , long long n){
 
    for(int i = 3 ; i <= n  ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
 
int main(){
 
    long long n;
    cin >> n;
    long long dp[n + 1];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    cout << getFib(dp , n);
 
return 0;
}
