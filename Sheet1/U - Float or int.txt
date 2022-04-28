#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    float n;
    cin >> n;
    if (n == floor(n)){
        cout << "int " << int(n);
    }
    else
        cout << "float " << int(n) << " " << fmod(n, 1);
 
 
return 0;
}
