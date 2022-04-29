#include<bits/stdc++.h>
 
using namespace std;
 
int isPrime(int n){
    if (n == 1 || n == 0 )
        return false;
 
    for (int i = 2 ; i <= n/2 ; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
 
}
 
int main(){
 
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
 
return 0;
}
