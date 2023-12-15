#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    ll n , k; cin >> n >> k;

    k = min((int)k, 61);
    ll x = pow(2, k);
    ll y = n+1;

    ll ans = min(x,y);
    cout << ans << "\n";

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}