#include <bits/stdc++.h>
using namespace std;
int a[3000], b[3000];
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int p = 0;
    for(int i = 0; i < s1.length(); i++) a[i] = s1[s1.length() - i - 1] - '0';
    for(int i = 0; i < s2.length(); i++) b[i] = s2[s2.length() - i - 1] - '0';
    for(int i = 0; i < 3000; i++){
        b[i] += a[i];
        b[i + 1] += b[i] / 10;
        b[i] %= 10;
    }
    for(int i = 2999; i >= 0; i--){
        if(b[i] != 0) p = 1;
        if(p) cout << b[i];
    }
    if(!p) cout << "0";
    cout << endl;
}