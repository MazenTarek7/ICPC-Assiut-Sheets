#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int cntEven = 0 , cntOdd = 0 , cntPositive = 0 , cntNegative = 0;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] % 2 == 0){
            cntEven++;
        }
        else
            cntOdd++;
        if (arr[i] > 0)
            cntPositive++;
        else if (arr[i] < 0)
            cntNegative++;
    }
    cout << "Even: " << cntEven << endl << "Odd: " << cntOdd << endl << "Positive: " << cntPositive << endl << "Negative: " << cntNegative << endl;
 
return 0;
}
