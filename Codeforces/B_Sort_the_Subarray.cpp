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
    int n; cin >> n;

    vi a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int l = -1, r = -1;

    // for(int i = 0; i < n; i++){
    //     if(a[i] != b[i]){
    //         l = i;
    //         break;
    //     }
    // }
    for(int i = n-1; i >= 0; i--){
        if(a[i] != b[i]){
            r = i;
            if(l == -1) l = i;
        }
    }

    while(l > 0 and b[l-1] <= b[l]) l--;
    while(r < n-1 and b[r] <= b[r+1]) r++;

    cout << l+1 << " " << r+1 << "\n";
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