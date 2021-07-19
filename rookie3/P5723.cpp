#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0, limit, num = 0, flag = 0;
    cin >> limit;
    for(int i = 2; sum + i <= limit; i++){
        for(int j = 2; j <= sqrt(i); j++)
        if(i % j == 0) flag = 1;
        if(!flag){
            cout << i << endl;
            sum += i;
            num++;
            
        }
        flag = 0;
    }
    cout << num << endl;
}