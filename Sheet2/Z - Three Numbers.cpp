#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int k , s , z , cnt = 0;
    cin >> k >> s;
    for (int i = 0  ; i <= k ; i++){
        for (int j = 0 ; j <= k ; j++){
            z = s-(i+j);
            if (z >= 0 && z <= k){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
 
    return 0;
}
