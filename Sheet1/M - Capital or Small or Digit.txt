#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    char a;
    cin >> a;
    if (isdigit(a)){
        cout << "IS DIGIT";
    }
    else if (isalpha(a)){
            cout << "ALPHA" << endl;
        if (isupper(a)){
            cout << "IS CAPITAL" << endl;
        }
        else{
            cout << "IS SMALL" << endl;
        }
    }
 
return 0;
}
