#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int mult = 1;
    for (int i = 1; i <= 12; i++){
        cout << n << " * " << mult << " = " << n*mult << endl;
        mult++;
    }
 
return 0;
}
