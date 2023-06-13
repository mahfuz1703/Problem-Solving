#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

void solve(){
    string s; cin >> s;
    bool oky = next_permutation(s.begin(), s.end());
    if(oky) print(s);
    else print("no answer");
}
int main(){
    FASTER

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}