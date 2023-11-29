#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
#define mem(a,b) memset(a, b, sizeof(a) )
#define MOD 1000000007

int main(){
    int n, m;
    char c[123][123];
    ll ans = 1;
    bool vis[30];

    cin >> n >> m;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) cin >> c[i][j];
    }

    for ( int i = 0; i < m; i++ ) {
        ll cnt = 0;
        mem ( vis, 0 );
        for ( int j = 0; j < n; j++ ) {
            cnt += ( !vis[c[j][i]-'A'] );
            vis[c[j][i]-'A'] = 1;
        }
        ans *= cnt;
        ans %= MOD;
    }

    cout << ans;

    return 0;
}
