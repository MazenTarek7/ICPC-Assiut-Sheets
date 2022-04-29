#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    string n;
    cin >> n;
    string temp = n;
    reverse(n.begin() , n.end());
    n.erase(0, n.find_first_not_of('0'));
    cout << n << endl;
    if (temp == n){
        cout << "YES";
    }
    else
        cout << "NO";
 
return 0;
}
