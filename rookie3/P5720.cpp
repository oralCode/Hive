#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, d;
    cin >> l;
    while(l){
        l /= 2;
        d++;
    }
    cout << d << endl;;
}