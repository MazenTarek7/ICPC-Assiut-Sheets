#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int a[n] , b[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for (int i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    int flag = 1;
    sort(a , a + n);
    sort(b , b + n);
    flag = equal(a, a + n, b);
    if (flag == 1)
        cout << "yes";
    else
        cout << "no";
 
return 0;
}
