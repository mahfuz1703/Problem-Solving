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
    string s; cin >> s;
    ll len = s.size();

    // bool flag1 = false;
    // bool flag2 = false;

    // int indx1 = -1, indx2 = -1;
    for(int i = 0; i < len-1; i++){
        if(s[i] == 'A' and s[i+1] == 'B'){
            for(int j = i + 2; j < len-1; j++){
                if(s[j] == 'B' and s[j+1] == 'A'){
                    print("YES");
                    return;
                }
            }
        }
    }

    for(int i = 0; i < len-1; i++){
        if(s[i] == 'B' and s[i+1] == 'A'){
            for(int j = i + 2; j < len-1; j++){
                if(s[j] == 'A' and s[j+1] == 'B'){
                    print("YES");
                    return;
                }
            }
        }
    }

    // cout << indx1 << " " << indx2 << "\n";

    // if(flag1 and flag2) print("YES");
    // else print("NO");

    print("NO");
}
int main(){
    FASTER

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything