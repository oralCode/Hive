#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n], b[n], suma = 0, sumb = 0, lena = 0, lenb = 0;
    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            a[lena] = i;
            suma += a[lena];
            lena++;
        }
        else{
            b[lenb] = i;
            sumb += b[lenb];
            lenb++;
        }
    }
    cout << fixed << setprecision(1) << suma * 1.0 / lena << " " << fixed << setprecision(1) << sumb * 1.0 / lenb << endl;
}