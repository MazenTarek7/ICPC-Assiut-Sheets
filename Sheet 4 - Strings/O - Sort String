#include<bits/stdc++.h>

#define ll long long

using namespace std;

int arr[27] = {0};

int main(){

    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        char s;
        cin >> s;
        arr[ (int)s - 'a']++;
    }
    for (int i = 0 ; i < 26 ; i++){

        while(arr[i] != 0){
            cout << (char)(i + 'a');
            arr[i]--;
        }
    }


return 0;
}
