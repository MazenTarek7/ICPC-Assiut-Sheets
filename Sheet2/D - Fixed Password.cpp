#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int password = 1999;
    int n;
    while (cin >> n){
        if (n == password){
            cout << "Correct" << endl;
            break;
        }
        else
            cout << "Wrong" << endl;
    }
 
 
return 0;
}
