/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
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
typedef double dl;
 
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define sqr(a) ((a) * (a))
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define print(x) cout << x << "\n"

void solve(){
    int n, m; cin >> n >> m;
    ll arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }

    ll mx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ll present = 0;

            // go left-top
            int r = i, c = j;
            while(r >= 0 and c >= 0){
                present += arr[r][c];
                r--;  c--;
            }

            // go right-top
            r = i; c = j;
            while(r >= 0 and c < m){
                present += arr[r][c];
                r--; c++;
            }

            // go right-bottom
            r = i; c = j;
            while(r < n and c < m){
                present += arr[r][c];
                r++;  c++;
            }

            // go left-bottom
            r = i; c = j;
            while(r < n and c >= 0){
                present += arr[r][c];
                r++; c--;
            }
            present -= arr[i][j] * 3; // arr[i][j] count extra 3 times that's why do 3 time reduce from presents
            mx = max(mx, present);
        }
    }
    print(mx);
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