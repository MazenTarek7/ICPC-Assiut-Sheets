#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n , m;
    cin >> n >> m;
    int arr[n];
    int freq[m+1] = {0};
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 1 ; i <= m ; i++){
        cout << freq[i] << endl;
    }
 
 
return 0;
}
