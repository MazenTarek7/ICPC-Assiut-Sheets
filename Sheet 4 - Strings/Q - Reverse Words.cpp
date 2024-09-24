#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

	string n;
	int flag = 0;
	while(cin >> n){
		reverse(n.begin() , n.end());
		if(flag == 1){
			cout << " ";
		}
		flag = 1;
		cout << n;
	}


return 0;
}
