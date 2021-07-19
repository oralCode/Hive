#include <bits/stdc++.h>
using namespace std;
int a[2000], b[2000], c[4000], p;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++) a[i] = s1[s1.length() - i - 1] - '0';
    for(int i = 0; i < s2.length(); i++) b[i] = s2[s2.length() - i - 1] - '0';
    for(int i = 0; i < s1.length(); i++)
    for(int j = 0; j < s2.length(); j++) c[i + j] += a[i] * b[j];
    for(int i = 0; i < 4000; i++){
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    for(int i = 3999; i >= 0; i--){
        if(c[i] != 0) p = 1;
        if(p) cout << c[i];
    }
    if(!p) cout << "0";
    cout << endl;
}