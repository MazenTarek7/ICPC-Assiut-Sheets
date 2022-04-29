
#include<bits/stdc++.h>
 
using namespace std;
 
long long getFact(long long num){
    if (num > 1)
        return num * getFact(num - 1);
    else
        return 1;
}
 
int main(){
 
    long long n , t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << getFact(n) << endl;
    }
 
return 0;
}
