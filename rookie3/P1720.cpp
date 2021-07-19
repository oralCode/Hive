#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, a = 1, b = 1, c;
    cin >> n;
    if(n == 0) cout << "0";
    if(n == 1 || n == 2) cout << "1";
    for(int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    if(n > 2) cout << c;
    cout << ".00" << endl;
}