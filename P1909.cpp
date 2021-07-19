#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a[3][3], sum = 100000000;
    cin >> n;
    for(int i = 0; i < 3; i++){
        cin >> a[i][0] >> a[i][1];
        if(n % a[i][0] != 0) a[i][2] = n / a[i][0] + 1;
        else a[i][2] = n / a[i][0];
        if(sum > a[i][1] * a[i][2]) sum = a[i][1] * a[i][2];
    }
    cout << sum << endl;
}