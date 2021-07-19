#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, n, l = 0;
    cin >> x >> n;
    n = n + x;
    for(int i = x; i < n; i++)
     if((i % 7) % 6 != 0 && (i % 7) % 7 != 0) l += 250; 
    cout << l << endl;
}