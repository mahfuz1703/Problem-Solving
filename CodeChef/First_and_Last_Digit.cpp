#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int n; cin >> n;
    int s_num = 0, f_num = n % 10;
    while(n){
        s_num = n % 10;
        n /= 10;
    }
    cout << f_num + s_num << "\n";
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
