#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int n; cin >> n;
    ll sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    cout << sum << "\n";
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
