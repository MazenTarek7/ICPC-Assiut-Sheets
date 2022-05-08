#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    int tt;
    cin >> tt;
    string s , t;
    while (tt--){
        cin >> s >> t;
        int sizee;
        int sBigger = 0;
        if (s.length() > t.length()){
            sizee = t.length();
            sBigger = 1;
        }
        else
            sizee = s.length();
        string answer = "";
        for (int i = 0 ; i < sizee ; i++){
            answer += s[i];
            answer += t[i];
        }
        if (sBigger)
            answer = answer + s.substr(t.length() , s.length());
        else
            answer = answer + t.substr(s.length() , t.length());

        cout << answer << endl;
    }

return 0;
}
