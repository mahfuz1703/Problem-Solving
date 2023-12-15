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
                                        
                                        
/// Functions-------------
bool isVowel(char c){ return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'); }
bool isPowerOfTwo(int x) { return x && (!(x & (x - 1))); }
                                
void somadhan(){
    int n; cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vi odd, even, neww;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0) even.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int odd_p = 0, even_p = 0;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            neww.push_back(even[even_p]); ++even_p;
        }
        else{
            neww.push_back(odd[odd_p]); ++odd_p;
        }
    }

    if(is_sorted(neww.begin(), neww.end())) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    FASTER
                 
    int t = 1;
    cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}
/// Alhamdulilla for everything