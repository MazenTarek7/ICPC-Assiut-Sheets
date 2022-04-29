#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n , m;
    int flag = 1;
    while (flag){
        cin >> n >> m;
        if (n <= 0 || m <= 0){
            flag = 0;
            break;
        }
        int sum = 0;
        if (m == n){
            sum += n;
            cout << n << " " << "sum =" << sum << endl;
            continue;
        }
        else if (m > n){
            for (int i = n ; i<= m ; i++){
                cout << i << " ";
                sum += i;
            }
        }
        else if (n > m){
            for (int i = m ; i<= n ; i++){
                cout << i << " ";
                sum += i;
            }
        }
        cout << "sum =" << sum;
        cout << endl;
    }
 
return 0;
}
