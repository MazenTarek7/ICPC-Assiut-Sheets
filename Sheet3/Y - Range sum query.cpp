#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
 
    ll n , q;
    cin >> n >> q;
    ll arr[n];
    ll pre[n];
    for (int i = 1 ; i <= n ; i++){
        cin >> arr[i];
    }
    for (int i = 1 ; i <= n ; i++){
        pre[i] = arr[i] + pre[i - 1];
    }
    while (q--){
        int l , r;
        cin >> l >> r;
        ll sum = pre[r] - pre[l-1];
        cout << sum << endl;
    }
 
 
return 0;
}
