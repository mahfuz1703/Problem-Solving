/// In the name of ALLAH
/// La ilaha illallah Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int n; cin >> n;
    vi v(n);
    loop(0, n) cin >> v[i];
    int ans = 0;
    for(auto i = v.begin(); i != v.end(); i++){
        for(auto j = v.begin() + 1; j != v.end(); j++){
            if(i <= j){
                v.erase(i);
                v.erase(j);
                ans++;
            }
        }
    }
    dekhaw(ans);
}
int main(){
    FASTER

    int t; cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}

/// Alhamdulilla for everything