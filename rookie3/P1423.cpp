#include <bits/stdc++.h>
using namespace std;
int main(){
    float x, s = 0;
    int i;
    cin >> x;
    for(i = 1; s < x; i++) s = 2 * (1 - pow(0.98, i)) / 0.02;
    cout << i - 1 << endl;
}