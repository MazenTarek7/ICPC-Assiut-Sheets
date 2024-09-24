#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    char a;
    cin >> a;
    if (isupper(a)){
        cout << char(tolower(a)) << endl;
    }
    else{
        cout << char(toupper(a)) << endl;
    }
 
return 0;
}
