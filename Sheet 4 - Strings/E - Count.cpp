#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
 
    string s;
    cin >> s;
    ll sum = 0;
    for (int i = 0 ; i < s.length() ; i++){
        sum += (ll)s[i] - (ll)'0';
    }
    cout << sum << endl;
 
return 0;
}
