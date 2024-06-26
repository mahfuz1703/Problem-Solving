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

vector <int> bin;
vector <int> isPossible(1000001, 0);
void preProcess(){
    int n = 100000;
    for(int i = 1; i <= n; i++){
        int tmp = i;
        int b = 0;
        while(tmp){
            if(tmp % 10 > 1){
                b = 1;  
                break;
            }
            tmp /= 10;
        }
        if(!b) bin.push_back(i);
    }

    isPossible[1] = 1;
    isPossible[0] = 1;
    for(auto u : bin){
        for(int j = 1; j <= 1000000; j++){
            if(isPossible[j] and 1LL * u * j <= 1000000){
                isPossible[u * j] = 1;
            }
        }
    }
}
void solve(){
    int n; cin >> n;
    if(isPossible[n]) print("YES");
    else print("NO");
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    preProcess();
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything