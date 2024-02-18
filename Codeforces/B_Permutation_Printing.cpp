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
    // vi ans(n);
    // int indx = 0;
    // if(n & 1) {
    //     for(int i = n-1; i >= 1; i -= 2){
    //         ans[indx] = i;
    //         indx += 2;
    //     }
    // }else{
    //     for(int i = n; i >= 1; i -= 2){
    //         ans[indx] = i;
    //         indx += 2;
    //     }
    // }
    // indx = 1;
    // for(int i = 1; i <= n; i += 2){
    //     ans[indx] = i;
    //     indx += 2;
    // }
    // for(auto u : ans) cout << u << " ";
    // cout << "\n";

    vi even, odd;
    for(int i = 1; i <= n; i += 2) odd.push_back(i);
    for(int i = 2; i <= n; i += 2) even.push_back(i);

    reverse(all(even));

    if(n & 1){
        int i = 0, j = 0;
        while(i < odd.size() or j < even.size()){
            if (i < odd.size()) cout << odd[i++] << ' ';
            if (j < even.size()) cout << even[j++] << ' ';
        }
        cout << "\n";
    }else{
        int i = 0, j = 0;
        while(j < odd.size() or i < even.size()){
            if (i < even.size()) cout << even[i++] << ' ';
            if (j < odd.size()) cout << odd[j++] << ' ';
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