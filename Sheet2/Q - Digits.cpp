#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    string n;
    cin >> t;
    while (t--){
        cin >> n;
        reverse(n.begin() , n.end());
        for (int i = 0 ; i < n.length() ; i++){
            cout << n[i] << " ";
        }
 
        cout << endl;
    }
 
return 0;
}
