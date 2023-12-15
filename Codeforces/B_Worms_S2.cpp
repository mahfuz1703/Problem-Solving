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
                            
void testCase(){
    int mx = 1e5+123;
    int n; cin >> n;
    int arr[mx], l[mx], r[mx];
    int last = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        l[i] = last + 1;
        r[i] = last + arr[i];
        last = r[i];
    }

    int m; cin >> m;
    while(m--){
        int x; cin >> x;
        int L = 1, R = n;
        while(L <= R){
            int mid = (L+R) >> 1;
            if(x >= l[mid] and x <= r[mid]){
                cout << mid << "\n"; break;
            }

            if(x > r[mid]) L = mid + 1;
            else R = mid - 1;
        }
    }

}
int main(){
    FASTER
                 
    int t = 1;
    // cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}
/// Alhamdulilla for everything