/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

void solve(){
    int n; cin >> n;

    int arr[n+1][n+1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }

    int primary = 0;
    for(int i = 1, j = 1; i <= n, j <= n; i++, j++){
        primary += arr[i][j];
    }

    int secondary = 0;
    for(int i = 1, j = n; i <= n, j >= 1; i++, j--){
        secondary += arr[i][j];
    }

    int ans = abs(primary - secondary);
    // print(primary);
    // print(secondary);
    print(ans);
}
int main(){
    FASTER

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything