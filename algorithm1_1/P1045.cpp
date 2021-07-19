#include <bits/stdc++.h>
using namespace std;
int  bas[500], res[500], cnt[1000];
void result_1(){
    for(int i = 0; i < 500; i++)
    for(int j = 0; j < 500; j++) cnt[i + j] += bas[j] * res[i];
    for(int i = 0; i < 500; i++){
        cnt[i + 1] += cnt[i] / 10;
        cnt[i] %= 10;
    }
    for(int i = 0; i < 500; i++) res[i] = cnt[i];
    for(int i = 0; i < 500; i++) cnt[i] = 0;
}
void result_2(){
    for(int i = 0; i < 500; i++)
    for(int j = 0; j < 500; j++) cnt[i + j] += bas[j] * bas[i];
    for(int i = 0; i < 500; i++){
        cnt[i + 1] += cnt[i] / 10;
        cnt[i] %= 10;
    }
    for(int i = 0; i < 500; i++) bas[i] = cnt[i];
    for(int i = 0; i < 500; i++) cnt[i] = 0;
}
void fastPower(long long power){
    while(power > 0){
        if(power & 1) result_1();
        power >>= 1;
        result_2();
    }
}
int main(){
    int p, ans = 1;
    cin >> p;
    cout << (int)(log10(2) * p + 1) <<endl;
    res[0] = 1;
    bas[0] = 2;
    fastPower(p);
    res[0] -= 1;
    for(int i = 499; i >= 0; i--){
        if(ans % 50 == 0) cout << res[i] << endl;
        else cout << res[i];
        ans++;
    }
    cout << endl;
}