#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    string s;
    cin >> s;
    int countL = 0;
    string answer = "";
    int answerCnt = 0;
    string results[10000];
    int j = 0;
    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] == 'L'){
            countL++;
            answer += s[i];
        }
        if (s[i] == 'R'){
            countL--;
            answer += s[i];
        }
        if (countL == 0 && answer.length() != 0){
            answerCnt++;
            results[j] = answer;
            j++;
            answer = "";
        }

    }
    cout << answerCnt << endl;

    for (int k = 0 ; k < j ; k++){
        cout << results[k] << endl;
    }

return 0;
}
