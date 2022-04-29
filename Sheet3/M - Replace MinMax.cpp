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
    int minIndex = 0;
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0 ; i < n ; i++){
        if (min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
        if (max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
 
return 0;
}
