#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[7][3], ans = 0, m = 0;
    for(int i = 0; i < 7; i++){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = a[i][0] + a[i][1];
    }
    for(int i = 0; i < 7; i++)
        if(a[i][2] > m){
            ans = i;
            m = a[i][2];
        }
    if(m <= 8) cout << "0" << endl;
    else cout << ans + 1 <<endl; 
}