#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int n; cin >> n;
    int cnt = 0;
    while(n){
        int digit = n % 10;
        if(digit == 4){
            cnt++;
        }
        n /= 10;
    }
    cout << cnt << "\n";
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
