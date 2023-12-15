#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    int arry[n];
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    int mx_pos = arry[k-1];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arry[i] == 0){
            break;
        }
        if(arry[i] >= mx_pos){
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
