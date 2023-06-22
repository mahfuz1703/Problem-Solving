#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

bool cmp(pair<int, int> &p1, pair<int, int> &p2){
    if(p1.first > p2.first) return 1;
    else if( p1.first == p2.first) return (p1.second < p2.second);
    else return 0;
}
void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n);

    loop(0, n) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for(auto u : v) if(u == v[k-1]) ans++;

    print(ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}