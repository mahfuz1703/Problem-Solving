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
    for(int i = 0; i < n; i++) cin >> v[i];

    int cur = 0, ans = INT_MIN;
    for(int i = 0; i < n; i++){
        if(i > 0 and abs(v[i]) % 2 == abs(v[i-1]) % 2){
            cur = v[i];
            ans = max(ans, cur);
        }else{
            cur = max(v[i], cur + v[i]);
            ans = max(ans, cur);
        }
    }
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