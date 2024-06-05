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
    vector<ll> a(n), b(n);
    set<ll> st;
    for(auto &u : a){
        cin >> u;
        st.insert(u);
    }
    for(auto &u : b) {
        cin >> u;
        st.insert(u);
    }

    if(n == 1){
        if(a[0] == b[0]){
            print(2);
            return;
        }else{
            print(1);
            return;
        }
    }


    if(st.size() == 2*n){
        print(1);
        return;
    }

    ll mx = 0;
    ll tmp1 = 0, tmp2 = 0, value;

    ll cnt = 1;
    ll tmpCnt = 0;
    value = a[0];
    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            cnt++;
            if(cnt > tmp1) value = a[i];
        }else{
            tmp1 = max(tmp1, cnt);
            cnt = 1;
        }
    }
    tmp1 = max(cnt, tmp1);
    // cout << "tmp1 first: " <<  tmp1 << "\n";
    // cout << "value first: " <<  value << "\n";

    cnt = 1;
    tmpCnt = 0;
    for(int i = 0; i < n-1; i++){
        if((b[i] == b[i+1]) and b[i] == value){
            cnt++;
        }else{
            tmpCnt = max(tmpCnt, cnt);
            cnt = 1;
        }
    }
    tmp1 += tmpCnt;
    // cout << "tmp1 second: " <<  tmp1 << "\n";


    cnt = 1;
    tmpCnt = 0;
    value = b[0];
    for(int i = 0; i < n-1; i++){
        if(b[i] == b[i+1]){
            cnt++;
            if(cnt > tmp2) value = b[i];
        }else{
            tmp2 = max(tmp2, cnt);
            cnt = 1;
        }
    }
    tmp2 = max(cnt, tmp2);
    // cout << "tmp2 first: " <<  tmp2 << "\n";
    // cout << "value second: " <<  value << "\n";

    cnt = 1;
    tmpCnt = 0;
    for(int i = 0; i < n-1; i++){
        if((a[i] == a[i+1]) and a[i] == value){
            cnt++;
        }else{
            tmpCnt = max(tmpCnt, cnt);
            cnt = 1;
        }
    }
    tmp2 += tmpCnt;
    // cout << "tmp2 second: " <<  tmp2 << "\n";

    mx = max(tmp1, tmp2);
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