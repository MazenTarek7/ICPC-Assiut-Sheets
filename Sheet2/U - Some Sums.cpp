#include<bits/stdc++.h>
using namespace std;
 
int getDigitsSum(int num){
 
    int sum = 0;
    while (num != 0){
        sum = sum + num % 10;
        num /= 10;
    }
    return sum;
 
}
 
int main(){
    int n , a , b , result = 0;
    cin >> n >> a >> b;
    for (int i = 1 ; i <= n ; i++){
        int temp = getDigitsSum(i);
        if (temp >= a && temp <= b){
            result += i;
        }
    }
    cout << result << endl;
 
 
 
return 0;
}
