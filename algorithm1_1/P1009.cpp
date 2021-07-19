#include <bits/stdc++.h>
using namespace std;
int b[3000];
void pluss(int a[], int b[], int la, int lb){
    for(int i = 0; i < max(la, lb); i++){
        b[i] += a[i];
        b[i + 1] += b[i] / 10;
        b[i] %= 10;
    }
}
int main(){
    int a[3000], n, p = 0;
    cin >> n;
    for(int i = 0; i < 3000; i++) b[i] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 3000; j++) a[j] = 0;
        a[0] = 1;
        for(int j = 1; j <= i; j++){
            for(int k = 0; k < 3000; k++) a[k] *= j;
            for(int k = 0; k < 3000; k++){
                a[k + 1] += a[k] / 10;
                a[k] %= 10;
            }
        }
        pluss(a, b, 3000, 3000);
    }
    for(int i = 3000; i >= 0; i--){
        if(b[i] != 0) p = 1;
        if(p) cout << b[i];
    }
    cout << endl;
}