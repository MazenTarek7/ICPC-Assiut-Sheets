#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int a , b , total = 0 , operation;
    int flag = 0 , stop = 1;
    cin >> a >> b;
    for (int i = a ; i <= b ; i++){
        int temp = i;
        total = i;
        while (temp != 0){
            operation = temp % 10;
            temp /= 10;
            if (operation == 7 || operation == 4){
                flag = 1;
                if (temp == 0){
                    stop = 0;
                    cout << total << " ";
                }
            }
            else{
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0 && stop == 1){
        cout << -1 << endl;
    }
 
return 0;
}
