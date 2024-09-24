#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
 
    string a , b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() << endl << a + b << endl << b[0]+ a.substr(1,a.length()) + " " + a[0]+ b.substr(1,b.length());
 
return 0;
}
