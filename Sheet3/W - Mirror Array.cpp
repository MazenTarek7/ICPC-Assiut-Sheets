#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
 
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    int mirror[n][m] = {0};
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            mirror[i][j] = arr[i][m - 1 - j];
        }
    }
 
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cout << mirror[i][j] << " ";
        }
        cout << endl;
    }
 
return 0;
}
