#include <bits/stdc++.h>
using namespace std;
int main(){
    double n, x;
    cin >> n;
    if(n <= 150) x = n * 0.4463;
    else if(n > 150 && n <= 400) x = (n - 150) * 0.4663 + 150 * 0.4463;
    else x = (n - 400) * 0.5663 + 250 * 0.4663 + 150 * 0.4463;
    cout << fixed << setprecision(1) << x << endl;
}