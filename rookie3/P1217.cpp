#include <bits/stdc++.h>
using namespace std;
int prime[10000001];
void isPrime(long long i){
    prime[1] = 1;
    for(long long j = 2; j <= sqrt(i); j++){
        if(!prime[j]){
            for(long long k = 2; k <= i / j; k++){
                prime[j * k] = 1;
            }
        }
    }
}
bool isPanlidrome(long long i){
    long long j, num = 0;
    j = i;
    while(j){
        num = num * 10 + j % 10;
        j /= 10;
    }
    if(num == i) return true;
    return false;
}
int main(){
    long long a, b;
    int flag = 0;
    cin >> a >> b;
    if(b >= 10000000) b = 10000000;
    isPrime(b);
    for(long long i = a; i <= b; i++){
    if(isPanlidrome(i)){
        if(prime[i] == 0) flag++;
    }
    if(flag) cout << i << endl;
    flag = 0;
    }
}