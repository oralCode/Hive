#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans = 0, x, j;
    cin >> n >> x;
    for(int i = 0; i <= n; i++){
        j = i;
        while(j){
            if(x == j % 10) ans++;
            j /= 10;
        }
    }
    cout << ans << endl;
}