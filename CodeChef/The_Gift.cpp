#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

void solve(){
    int x, n, m; cin >> x >> n >> m;

    int sum = x + m;
    if(sum >= n) print("YES");
    else print("NO");
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}