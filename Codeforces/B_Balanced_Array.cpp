#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector < int > v;
    n /= 2;
    if(n & 1) cout << "NO\n";
    else{
        for(int i = 1; i <= n; i++) v.push_back(i*2);
        for(int i = 1; i < n; i++) v.push_back(i*2-1);

        cout << "YES\n";
        for(int i = 0; i < n*2-1; i++){
            cout << v[i] << " ";
        }cout << 3 * n - 1 << "\n";
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}