#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int matrix[6][6], m,n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1) {m=i;n=j;}
        }
    }
    cout << abs(3-m) + abs(3-n) << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
