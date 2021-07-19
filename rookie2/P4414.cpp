#include <bits/stdc++.h>
using namespace std;
int main(){
    char b[3];
    int a[3], A, B, C, aa, bb, cc;
    for(int i = 0; i < 3; i++) cin >> a[i];
    for(int i = 0; i < 3; i++){
        cin >> b[i];
        if(b[i] == 'A') A = i;
        if(b[i] == 'B') B = i;
        if(b[i] == 'C') C = i;
    }
    sort(a, a + 3);
    aa = a[0];
    bb = a[1];
    cc = a[2];
    a[A] = aa;
    a[B] = bb;
    a[C] = cc;
    for(int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << endl;
}