#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int cnt = 0;
    int curr = 1;
    for (int i = 1 ; i <= n ; i++){
        for (int j = curr ; j < curr + 3 ; j++){
            cout << j << " ";
        }
        curr = curr + 4;
        cout << "PUM" << endl;
    }
 
return 0;
}
