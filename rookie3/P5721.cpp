#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans, j = 0;
    cin >> n;
    ans = n;
    for(int i = 1; i <= (n + 1) * n / 2; i++){
        if(i < 10) cout << "0" << i;
        else cout << i;
        j++;
        if(j == ans){
            cout << endl;
            ans--;
            j = 0;
        }
    }
}