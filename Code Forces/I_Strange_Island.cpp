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

bool check(int h[], int m, int k, int dis){
    int last = h[1] + dis;
    k--;
    for(int i = 2; i <= m; i++){
        if(abs(h[i] - last) > dis){
            if(k == 0) return 0;
            last = h[i] + dis;
            k--;
        }
    }
    return 1;
}                              
int testCase(){
    int n, m, k; cin >> n >> m >> k;
    int houses[m];
    for(int i = 1; i <= m; i++) cin >> houses[i];

    int l = 0, r = n, ans;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(houses, m, k, mid) == 1){
            ans = mid;
            r = mid - 1;
        }else l = mid + 1;
    }
    return ans;
}
int main(){
    FASTER
                 
    int t = 1;
    cin >> t;
    int tc = 1;
    while(tc <= t){
        cout << "Case " << tc << ": " << testCase() << "\n";
        tc++;
    }
    return 0;
}
/// Alhamdulilla for everything