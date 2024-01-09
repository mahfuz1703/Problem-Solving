/// In the name of ALLAH

  /*----------------------------*/
 /*          Mahfuz            */
/*----------------------------*/

#include <bits/stdc++.h>
#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define all(a) (a).begin(),(a).end()
using namespace std;

void solve() {
    int n; cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            for(int k = 0; k <= n; k++){
                if(i + j + k <= n){
                    cout << i << " " << j << " " << k << "\n";
                }
            }
        }
    }
}
int main() {
    FASTER

    int tt = 1;
    // cin >> tt;
    // int i = 1;
    while(tt--){
        // cout << "Case " << i << ": ";
        solve();
        // i++;
    }
    return 0;
}

/// Alhamdulilla for everything