/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
                                                
#include<bits/stdc++.h>
using namespace std;
                            
typedef long long ll;
typedef map<int, int> mi;
typedef map<ll, ll> mll;
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
                                        
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

vi segTree;
void bld(int s, int e, int i, vi &a){
    if(s == e){
        segTree[i] = a[s];
        return;
    }
    int mid = s + (e - s)/2;
    bld(s, mid, 2*i+1, a);
    bld(mid+1,  e, 2*i+2, a);
    segTree[i] = segTree[2*i+1] & segTree[2*i+2];
}
int rnge(int s, int e, int i, int qs, int qe){
    if(qs <= s and qe >= e) return segTree[i];

    if(qs > e or qe < s) return INT_MAX;

    int mid = s + (e-s)/2;
    int l = rnge(s, mid, 2*i+1, qs, qe);
    int r = rnge(mid+1, e, 2*i+2, qs, qe);
    return l & r;
}
void testCase(){
    int n; cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int q; cin >> q;
    segTree.resize(4*n);
    bld(0, n-1, 0, a);
    while(q--){
        int st, k; cin >> st >> k;
        st--;
        int h = n-1, l = st, ans = -1;
        while(l <= h){
            int mid = l + (h-l)/2;
            int spm = rnge(0, n-1, 0, st, mid);
            if(spm >= k){
                l = mid+1;
                ans = mid;
            }else h = mid-1;
        }
        if(ans >= 0) ans += 1;
        cout << ans << " ";
    }
    cout << "\n";
}
int main(){
    FASTER
                 
    int t = 1;
    cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}
/// Alhamdulilla for everything