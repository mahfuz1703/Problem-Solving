#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void solve(){
    ll n, sum = 0, oky = 0, k = 0;
    cin >> n;
    loop(0, n){
        int x; cin >> x;
        if(x <= 0){
            if(x < 0) k = 1;
        }
        else{
            if(k == 1) oky++;
            k = 0;
        }
        if(x < 0) x *= -1;
        sum += x;
    }
    if(k == 1) oky++;
    cout << sum << " " << oky << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}