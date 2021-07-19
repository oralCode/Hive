#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans = 0, m = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0 && a[i] == a[i - 1] + 1) ans++;
        else{
            m = max(m, ans);
            ans = 0;
        }
    }
    cout << ++m << endl;
}