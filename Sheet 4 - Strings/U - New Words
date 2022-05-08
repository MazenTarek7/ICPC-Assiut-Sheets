#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    string s;
    cin >> s;
    int eLetter , gLetter , yLetter , pLetter , tLetter;
    eLetter = count(s.begin(), s.end(), 'e');
    eLetter += count(s.begin(), s.end(), 'E');
    gLetter = count(s.begin(), s.end(), 'g');
    gLetter += count(s.begin(), s.end(), 'G');
    yLetter = count(s.begin(), s.end(), 'y');
    yLetter += count(s.begin(), s.end(), 'Y');
    pLetter = count(s.begin(), s.end(), 'p');
    pLetter += count(s.begin(), s.end(), 'P');
    tLetter = count(s.begin(), s.end(), 't');
    tLetter += count(s.begin(), s.end(), 'T');
    int maximum = max(eLetter , max(gLetter , max(yLetter , max(pLetter , tLetter))));
    int minimum = min(eLetter , min(gLetter , min(yLetter , min(pLetter , tLetter))));
    if (eLetter == maximum && gLetter == maximum && yLetter == maximum && pLetter == maximum && tLetter == maximum){
        cout << maximum;
    }
    else{
        cout << minimum;
    }

return 0;
}
