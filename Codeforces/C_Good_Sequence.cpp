#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

void solve(){
    int n; cin >> n;
    map < int, int > m;

    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        m[a]++;
    }
    int ans = 0;
    for(auto u : m){
        if(u.second >= u.first) ans += (u.second - u.first);
        else ans += u.second;
    }
    print(ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}