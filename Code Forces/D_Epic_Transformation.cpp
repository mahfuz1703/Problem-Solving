/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
                                                
#include<bits/stdc++.h>
using namespace std;
                            
typedef long long ll;
typedef vector<int> vi;
typedef priority_queue<int> pqi;
typedef map<int, int> mi;
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
#define fraction(x) cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield);
                                        
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
                                        
                                        
/// Functions-------------
bool isVowel(char c){ return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'); }
bool isPowerOfTwo(int x) { return x && (!(x & (x - 1))); }
                                
void somadhan(){
    int n; cin >> n;
    mi m;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        m[x]++;
    }
    pqi pq;
    for(auto u : m) pq.push(u.s);
    while(pq.size() > 1){
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        a--; b--;
        if(a > 0) pq.push(a);
        if(b > 0) pq.push(b);
    }
    if(pq.empty()) cout << 0 << "\n";
    else cout << pq.top() << "\n";
}
int main(){
    FASTER
    int t; cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}
/// Alhamdulilla for everything