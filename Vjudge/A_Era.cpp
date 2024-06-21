/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

void solve(){
    int n; cin >> n;
    vi v(n);
    for(auto &u : v) cin >> u;

    int ans = 0;
    // if(n == 1) ans = 0;
    // else{
        int indx = 1;
        for(auto u : v){
            if(indx < u){
                int tmp = u - indx;
                ans += tmp;
                indx += tmp + 1;
            }else indx++;
        }
    // }
    print(ans);
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything