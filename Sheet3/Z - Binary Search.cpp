#include<bits/stdc++.h>
 
using namespace std;
 
int binarySearch(int arr[] , int low , int high , int targetElement){
        while (low <= high){
            int middle = (low + high) / 2;
 
            if (arr[middle] == targetElement){
                return 1;
            }
            else if (targetElement > arr[middle]){
                low = middle + 1;
            }
            else{
                high = middle - 1;
            }
        }
    return -1;
}
 
int main(){
 
    int n , q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr , arr + n);
    while (q--){
        int targetElement;
        cin >> targetElement;
        int found = binarySearch(arr , 0 , n - 1 , targetElement);
        if (found == -1)
            cout << "not found" << endl;
        else if (found == 1)
            cout << "found" << endl;
    }
 
return 0;
}
