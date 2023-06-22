#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void solve(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        int n, T; cin >> n >> T;
        map<pair<int, int>, bool> m;
        int id, sc; 
        bool visit = true;
        loop(0, T){
            cin >> id >> sc;
            if(m[{id, sc}]) visit = false;
            m[make_pair(id, sc)] = 1; 
        }
        if(visit) cout << "Scenario #" << i << ": possible\n";
        else cout << "Scenario #" << i << ": impossible\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}