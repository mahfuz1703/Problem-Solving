#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int x, y, z; cin >> x >> y >> z;

    if ((x*x) + (y*y) == (z*z) || (x*x) + (z*z) == (y*y) || (y*y) + (z*z) == (x*x)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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