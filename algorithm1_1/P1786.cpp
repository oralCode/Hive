#include <bits/stdc++.h>
using namespace std;
typedef struct{
    string name;
    string power;
    int followers;
    int rank;
} staticList;
int main(){
    int n;
    cin >> n;
    staticList a[n];
    int b[n];
    for(int i = 0; i < n; i++) cin >> a[i].name >> a[i].power >> a[i].followers >> a[i].rank;
    for(int i = 0; i < n; i++)
    if(a[i].power == "BangZhu"){
        cout << a[i].name << a[i].power << a[i].rank << endl;
        a[i].rank = -1;
    }
    for(int i = 0; i < n; i++)
    if(a[i].power == "FuBangZhu"){
        cout << a[i].name << a[i].power << a[i].rank << endl;
        a[i].rank = -1;
    }

}