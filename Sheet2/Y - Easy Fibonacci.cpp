
#include<bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
    int n;
    cin >> n;
    vector <long long> answer;
    if (n >= 2){
        answer.push_back(0);
        answer.push_back(1);
    }
    if (n < 2){
        answer.push_back(0);
    }
 
    for (int i = 2 ; i < n ; i++){
        answer.push_back(answer[i - 1] + answer[i - 2]);
    }
    for (int i = 0 ; i < answer.size() ; i++){
        cout << answer[i] << " ";
    }
 
return 0;
}
