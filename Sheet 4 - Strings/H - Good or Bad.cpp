#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    int t;
    cin >> t;
    string s;
    while (t--){
        cin >> s;
        int isGood = 0;
        for (int i = 0 ; i < s.length() - 2 ; i++){
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' || s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'){
                isGood = 1;
            }
        }
        if (isGood)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }

return 0;
}
