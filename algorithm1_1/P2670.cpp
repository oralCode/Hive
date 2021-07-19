#include <bits/stdc++.h>
using namespace std;
typedef struct{
    char data;
    int bomb;
}staticList;
int main(){
    int n, m;
    cin >> n >> m;
    staticList a[n + 2][m + 2];
    for(int i = 0; i < n + 2; i++)
    for(int j = 0; j < m + 2; j++){
        if(i == 0 || j == 0 || i == n + 1 || j == m + 1){
            a[i][j].data = '?';
            a[i][j].bomb = 0;
        }
        else{
            cin >> a[i][j].data;
            a[i][j].bomb = 0;
        }
    }
    for(int i = 1; i < n + 1; i++)
    for(int j = 1; j < m + 1; j++){
        if(a[i][j].data == '*'){
            a[i - 1][j].bomb++;
            a[i + 1][j].bomb++;
            a[i - 1][j + 1].bomb++;
            a[i - 1][j - 1].bomb++;
            a[i][j - 1].bomb++;
            a[i][j + 1].bomb++;
            a[i + 1][j - 1].bomb++;
            a[i + 1][j + 1].bomb++;
        }
    }
    for(int i = 1; i < n + 1; i++)
    for(int j = 1; j < m + 1; j++){
        if(a[i][j].data == '*') cout << "*";
        if(a[i][j].data != '*') cout << a[i][j].bomb;
        if(j == m) cout << endl;
    }
}