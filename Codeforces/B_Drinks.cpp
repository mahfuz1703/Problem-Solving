#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    int arry[n];
    for(int i = 0; i < n; i++) cin >> arry[i];

    int total = 0;
    for(int i = 0; i < n; i++) total += arry[i];

    double ans = (double)total/n;
    cout << fixed << setprecision(12) << ans << "\n";
}
int main(){
    solve();
    return 0;
}