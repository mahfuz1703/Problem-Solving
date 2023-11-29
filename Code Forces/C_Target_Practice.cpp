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
                                
int testCase(int a, int b){
    if(a == 0 or a == 9 or b == 0 or b == 9) return 1;
    else if(a == 1 or a == 8 or b == 1 or b == 8) return 2;
    else if(a == 2 or a == 7 or b == 2 or b == 7) return 3;
    else if(a == 3 or a == 6 or b == 3 or b == 6) return 4;
    return 5;
}
int main(){
    FASTER
                 
    int t = 1;
    cin >> t;
    while(t--){
        char c[10][10];
        int ans = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> c[i][j];
                if(c[i][j] == 'X') ans += testCase(i, j);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
/// Alhamdulilla for everything