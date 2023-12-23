#include <bits/stdc++.h>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
    FASTER

    int tt; cin >> tt;
    int i = 1;
    while(tt--){
        int n; cin >> n;
        vector<int> v(n);
        map <int, int> mp;
        for(int j = 0; j < n; j++){
            cin >> v[j];
            mp[v[j]]++;
        }
        int q; cin >> q;
        cout << "Case " << i << ":\n";
        while(q--){
            int x; cin >> x;
            cout << mp[x] << "\n";
        }
        i++;
        
    }
    return 0;
}