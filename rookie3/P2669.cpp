#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum1 = 0, sum2 = 0, k, ans = 1;
    cin >> k;
    while(sum1 <= k){
        sum1 += ans;
        sum2 += ans * ans;
        ans++;
    }
    sum2 -= (sum1 - k) * (ans - 1);
    cout << sum2 << endl;
}