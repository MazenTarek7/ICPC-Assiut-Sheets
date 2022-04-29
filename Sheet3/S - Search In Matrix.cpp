#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    int x;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    cin >> x;
    int flag = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (arr[i][j] == x)
                flag = 1;
        }
    }
    if (flag == 1){
        cout << "will not take number";
    }
    else
        cout << "will take number";
 
return 0;
}
