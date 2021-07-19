#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int first = 0, rear = s.length() - 1, flag = 1;
    if(s[0] == '-'){
        cout << s[0];
        first++;
    }
    for(int i = rear; i >= first; i--){
        if(s[i] == '0' && flag) continue;
        flag = 0;
        cout << s[i];
    }
    cout << endl;
}