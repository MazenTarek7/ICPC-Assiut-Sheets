#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int a , b;
    cin >> a >> b;
    string s;
    cin >> s;
    if (s[a] != '-'){
        cout << "No";
        return 0;
    }
    for (int i = 0 ; i < a + b ; i++){
        if (i == a)
            continue;
        if (!(s[i] <= '9' && s[i] >= '0')){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
 
return 0;
}
