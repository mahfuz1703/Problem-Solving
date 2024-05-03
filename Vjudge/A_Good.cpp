#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



void solve(){
    int r, c; cin >> r >> c;

    int maxAvengers = (r * c + 1) / 2;
    cout << maxAvengers << "\n";
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    int i = 1;
    while(t--){
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
    return 0;
}