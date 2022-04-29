
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    int n;
    while (t--){
        cin >> n;
        int arr[n];
        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        int min = arr[0] + arr[1] + 2 - 1;
        int minI , minI_value;
        int minJ , minJ_value;
        for (int i = 0 ; i < n - 1 ; i++){
                minI = i;
                minI_value = arr[i];
            for (int j = i + 1 ; j < n ; j++){
                minJ = j;
                minJ_value = arr[j];
                if (arr[i] + arr[j] + j - i < min){
                    min = arr[i] + arr[j] + (j+1) - (i+1);
                }
            }
        }
        cout << min << endl;
    }
 
return 0;
}
