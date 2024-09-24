#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    string s;
    cin >> s;
    string temp = s;
    reverse(s.begin() , s.end());
    if (s == temp)
        cout << "YES";
    else
        cout << "NO";

return 0;
}
