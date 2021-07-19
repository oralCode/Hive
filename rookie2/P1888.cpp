#include <bits/stdc++.h>
using namespace std;
int gcd (int x, int y) {
	if (y == 0) return x;
	else return gcd (y, x % y); 
}
int main(){
    int a[3], m, n, ans;
    for(int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a + 3);
    m = a[0];
    n = a[2];
    ans = gcd(m, n);
    m /= ans;
    n /= ans;
    cout << m << "/" << n << endl;
}