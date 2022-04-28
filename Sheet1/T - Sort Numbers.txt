#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int a , b , c;
    cin >> a >> b >> c;
    int min[] = {a , b , c};
    sort(min , min + 3);
    for (int i = 0 ; i < 3 ; i++){
        cout << min[i] << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c << endl;
 
 
return 0;
}
