#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t , x , y;
    cin >> t;
    while (t--){
        cin >> x >> y;
        int sum = 0;
        if (x > y){
            for (int i = (y + 1) ; i < x ; i++){
                if (i % 2 == 1)
                    sum += i;
            }
        }
        else if (y > x){
            for (int i = x + 1 ; i < y ; i++){
                if (i % 2 == 1)
                    sum += i;
            }
        }
        cout << sum << endl;
    }
 
return 0;
}
