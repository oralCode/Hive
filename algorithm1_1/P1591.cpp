#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3000], n, m, T;
    cin >> T;
    for(int k = 0; k < T; k++){
    int p = 0, ans = 0;
	cin >> n >> m;
	for(int i = 0; i < 3000; i++) a[i] = 0;
	a[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < 3000; j++){
			a[j] *= i;
		}
		for(int j = 0; j < 3000; j++){
			a[j + 1] += a[j] / 10;
			a[j] %= 10; 
		}
	}
	for(int i = 2999; i >= 0; i--){
		if(a[i] != 0) p = 1;
		if(p){
            if(a[i] == m) ans++;
        }
	}
	cout << ans << endl;
}
}