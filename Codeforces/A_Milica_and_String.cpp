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
#define sqr(a) ((a) * (a))
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define print(x) cout << x << "\n"

/// Functions-------------
bool isVowel(char c){ return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'); }
bool isPowerOfTwo(int x) { return x && (!(x & (x - 1))); }

void solve(){
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    ll cnt_b = 0, leng = s.size();
    for(auto u : s) if(u == 'B') cnt_b++;

    if(cnt_b == k) print("0");
    else{
        if(cnt_b < k){
            ll cnt = 0;
            for(ll i = 0; i < leng; i++){
                if(s[i] == 'A') cnt++;
                if(cnt == k - cnt_b){
                    cout << 1 << "\n" << i + 1 << " " << "B\n";
                    break;
                }
            }
        }
        else{
            ll cnt = 0;
            for(ll i = 0; i < leng; i++){
                if(s[i] == 'B') cnt++;
                if(cnt == cnt_b - k){
                    cout << 1 << "\n" << i + 1 << " " << "A\n";
                    break;
                }
            }
        }
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