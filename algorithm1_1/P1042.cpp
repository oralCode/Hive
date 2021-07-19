#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[62500];
    int i = 0, m = 0, n = 0, ans = 0;
    cin >> a[i];
    while(a[i] != 'E'){
        if(a[i] == 'W') m++;
        else if(a[i] == 'L') n++;
        if((m == 11 || n == 11) && (abs(m-n) > 1)){
            cout << m << ":" << n << endl;
            m = 0;
            n = 0;
            ans = 1;
        }
        else if((m > 11 || n > 11) && (abs(m-n) == 2)){
            cout << m << ":" << n << endl;
            m = 0;
            n = 0;
            ans = 1;
        }
        else ans = 0;
        i++;
        cin >> a[i];
    }
    if(!(m == 0 && n == 0) || a[0] == 'E' || ans == 1) cout << m << ":" << n << endl;
    m = 0;
    n = 0;
    i = 0;
    ans = 0;
    cout << endl;
    while(a[i] != 'E'){
        if(a[i] == 'W') m++;
        else if(a[i] == 'L') n++;
        if((m == 21 || n == 21) && (abs(m-n) > 1)){
            cout << m << ":" << n << endl;
            m = 0;
            n = 0;
            ans = 1;
        }
        else if((m > 21 || n > 21) && (abs(m-n) == 2)){
            cout << m << ":" << n << endl;
            m = 0;
            n = 0;
            ans = 1;
        }
        else ans = 0;
        i++;
    }
    if(!(m == 0 && n == 0) || a[0] == 'E' || ans == 1) cout << m << ":" << n << endl;
}