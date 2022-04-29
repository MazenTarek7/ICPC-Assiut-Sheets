#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int arr[n][n];
    int sumMain = 0;
    int sumSeco = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
            if (i == j)
                sumMain += arr[i][j];
            if ( (i + j) == (n - 1)){
                sumSeco += arr[i][j];
            }
        }
    }
    cout << abs(sumMain - sumSeco);
 
return 0;
}
