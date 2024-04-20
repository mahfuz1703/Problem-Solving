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
    int n, k, x; cin >> n >> k >> x;

    if(x != 1){
        print("YES");
        print(n);
        for(int i = 1; i <= n; i++) cout << 1 << " ";
        cout << "\n";
    }
    else if(k == 1 or (k == 2 and n % 2 == 1)) print("NO");
    else{
        print("YES");
        if(n % 2 == 0){
            n /= 2;
            print(n);
            while(n--){
                cout << 2 << " ";
            }
        }
        else{
            n -= 3;
            n /= 2;
            print(n + 1);
            cout << 3 << " ";
            while(n--) cout << 2 << " ";
        }
        cout << "\n";
    }
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