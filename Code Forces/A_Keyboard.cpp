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
    char c; cin >> c;
    string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";

    string s, ans; cin >> s;
    if(c == 'R'){
        for(auto u : s){
            int found1 = s1.find(u);
            if(found1 != string::npos) ans += s1[found1-1];

            int found2 = s2.find(u);
            if(found2 != string::npos) ans += s2[found2-1];

            int found3 = s3.find(u);
            if(found3 != string::npos) ans += s3[found3-1];
        }
    }else{
        for(auto u : s){
            int found1 = s1.find(u);
            if(found1 != string::npos) ans += s1[found1+1];

            int found2 = s2.find(u);
            if(found2 != string::npos) ans += s2[found2+1];

            int found3 = s3.find(u);
            if(found3 != string::npos) ans += s3[found3+1];
        }
    }
    cout << ans << "\n";
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