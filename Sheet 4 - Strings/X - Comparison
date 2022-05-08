#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    string s;
    string x = "" , y = "";
	cin >> s;
	string temp = s;
	string answer = s;

	for(int i = 0 ; i < s.length() - 1 ; i++){
		x += s[i];
		temp.erase(0 , 1);
		y = temp;
		sort(x.begin() , x.end());
		sort(y.begin() , y.end());
		answer = min(answer , x + y);
	}
	cout << answer << endl;

return 0;
}
