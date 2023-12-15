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
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) (int)x.size()
#define loopi(x,n) for (int i = x; i < n; i++)
#define loopj(x,n) for (int j = x; j < n; j++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

/// Functions-------------
bool isVowel(char c){ return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'); }
bool isPowerOfTwo(int x) { return x && (!(x & (x - 1))); }

void somadhan(){
    ll n; cin >> n;
    vl p(n), a(n), b(n);

    loopi(0, n) cin >> p[i];
    loopi(0, n) cin >> a[i];
    loopi(0, n) cin >> b[i];

    ll c; cin >> c;
    vl cus(c); loopi(0, c) cin >> cus[i];

    loopi(0, c){
        if(!p.empty()){
            loopj(0, n){
                if(cus[i] == a[j]){
                    ll x = p[j];
                    cout << x << " ";
                    p.erase(p.begin(), p.begin()+j);
                }
                else if(cus[i] == b[j]){
                    ll x = p[j];
                    cout << x << " ";
                    p.erase(p.begin(), p.begin()+j);
                }
            }
        }else{
            cout << -1 << "\n";
        }
    }
}
int main(){
    FASTER

    somadhan();
    return 0;
}

/// Alhamdulilla for everything