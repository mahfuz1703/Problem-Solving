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

const int MX = 2e5+7;
ll arr[MX],tree[4*MX],m;

void build(int node, int begin, int end){
    if(begin == end){
        tree[node] = arr[begin];
        return;
    }
    int left = node * 2;
    int right = left + 1;
    int mid = (begin + end) / 2;

    build(left, begin, mid);
    build(right, mid+1, end);

    tree[node] = (tree[left] * tree[right]) % m;
}
int query(int node, int begin, int end, int l, int r){
    if(begin > r or l > end) return 1;
    if(l <= begin and r >= end) return tree[node] % m;

    int left = node * 2;
    int right = left + 1;
    int mid = (begin + end) / 2;

    int bam = query(left, begin, mid, l, r);
    int dan = query(right, mid + 1, end, l, r);
    return (bam * dan) % m;
}
void solve(){
    int n; cin >> n >> m;
    string s;

    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> s;

    build(1, 0, n-1);
    int l = 1, r = n;
    for(int i = 0; i < n; i++){
        cout << query(1, 0, n-1, l-1, r-1) << " ";

        if(s[i] == 'L') l++;
        else r--;
    }
    cout << "\n";
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