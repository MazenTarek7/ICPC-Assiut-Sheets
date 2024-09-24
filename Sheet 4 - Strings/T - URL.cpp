#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    string s;
    cin >> s;
    string usernameValue = "" , pwdValue = "" , profileValue = "" , roleValue = "" , keyValue = "";
    usernameValue = s.substr((s.find("username") + 9) , ((s.find("&") - 1) - (s.find("username") + 8) ) );
    pwdValue = s.substr((s.find("pwd") + 4) , ((s.find("profile") - 1) - (s.find("pwd") + 4) ) );
    profileValue = s.substr((s.find("profile") + 8) , ((s.find("role") - 1) - (s.find("profile") + 8) ) );
    roleValue = s.substr((s.find("role") + 5) , ((s.find("key") - 1) - (s.find("role") + 5) ) );
    keyValue = s.substr((s.find("key") + 4) , ((s.find("key") + 4) ) );

    cout << "username: " << usernameValue << endl << "pwd: " << pwdValue << endl << "profile: " << profileValue << endl << "role: " << roleValue << endl << "key: " << keyValue;

return 0;
}
