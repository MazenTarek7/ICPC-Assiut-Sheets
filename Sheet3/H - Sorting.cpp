#include<bits/stdc++.h>
 
using namespace std;
 
void swap(int &n1 , int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
 
int main(){
 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int minIndex;
    for (int i = 0 ; i < n - 1 ; i++){
        minIndex = i;
        for (int j = i + 1 ; j < n ; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
    }
 
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
 
return 0;
}
