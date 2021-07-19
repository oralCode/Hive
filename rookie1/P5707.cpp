#include <bits/stdc++.h>
using namespace std;
int main(){
    int s, v, min, h, hh, mm;
    cin >> s >> v;
    if(s % v != 0) min = s / v + 11;
    else min = s / v + 10;
    h = min / 60;
    min = min % 60;
    if(h < 8){
        if(min == 0){
            mm = 0;
            hh = 8 - h;
        }
        else{
            mm = 60 - min;
            hh = 8 - h - 1;
        }
    }
    else{
        h = h - 8;
        if(min == 0){
            mm = 0;
            if(h != 0) hh = 24 - h;
            else hh = 0;
        }
        else{
            mm = 60 - min;
            hh = 24 - h - 1;
        }
    }
    if(hh < 10 && mm < 10) cout << "0" << hh << ":0" << mm <<endl;
    else if(hh < 10) cout << "0" << hh << ":" << mm <<endl;
    else if(mm < 10) cout << hh << ":0" << mm <<endl;
    else cout << hh << ":" << mm <<endl;
    return 0;
}