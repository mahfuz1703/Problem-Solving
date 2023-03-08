#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n; cin >> n;
    int arry[n][n];
    for(int i = 0;  i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arry[i][j];
        }
    }
    int dif = 0;
    for(int i = 0, j = 0, k = n-1; i < n; i++){
        dif += (arry[i][j++] - arry[i][k--]);
    }
    cout << abs(dif) << "\n";

    return 0;
}