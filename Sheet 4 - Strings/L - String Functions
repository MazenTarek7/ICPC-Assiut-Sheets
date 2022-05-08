#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    int n , q;
    cin >> n >> q;
    string s;
    cin >> s;
    string op;
    int n1 , n2;
    while(q--){
        cin >> op;
        if (op == "pop_back"){
            s.pop_back();
        }
        else if (op == "front"){
            cout << s[0] << endl;
        }
        else if (op == "back"){
            cout << s.back() << endl;
        }
        else if (op == "sort"){
            cin >> n1 >> n2;
            sort(s.begin() + min(n1 , n2) - 1 , s.begin() + max(n1 , n2));
        }
        else if (op == "reverse"){
            cin >> n1 >> n2;
            reverse(s.begin() + min(n1 , n2) - 1 , s.begin() + max(n1 , n2));
        }
        else if (op == "print"){
            int x;
            cin >> x;
            cout << s[x - 1] << endl;
        }
        else if (op == "substr"){
            cin >> n1 >> n2;
                for(int i = min(n1 , n2) - 1 ; i < max(n1 , n2) ; i++){
                    cout<<s[i];
			}
			cout<<endl;
        }
        else{
            char character;
            cin >> character;
            s.push_back(character);
        }

    }

return 0;
}
