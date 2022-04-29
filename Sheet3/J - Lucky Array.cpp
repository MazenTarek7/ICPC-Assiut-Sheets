#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int min = arr[0];
    int cnt = 1;
    int index = 0;
    for (int i = 0 ; i < n ; i++){
        if (min > arr[i]){
            min = arr[i];
            index = i;
        }
    }
    for (int i = index + 1 ; i < n ; i++){
        if (min == arr[i])
            cnt++;
    }
    if (cnt % 2 == 1)
        cout << "Lucky";
    else if (cnt % 2 == 0)
        cout << "Unlucky";
 
return 0;
}
