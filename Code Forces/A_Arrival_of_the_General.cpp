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
    int n; cin >> n;
    int arr[n]; loopi(0, n) cin >> arr[i];

    int cnt = 0;
    for (j = 1; j < num.length; j++){
    key = num[ j ];
    for(i = j - 1; (i >= 0) && (num[ i ] < key); i--){
        num[ i+1 ] = num[ i ];
    }
    num[ i+1 ] = key;  // Put the key in its proper location
 }
    dekhaw(cnt);
}
int main(){
    FASTER

    somadhan();
    return 0;
}

/// Alhamdulilla for everything