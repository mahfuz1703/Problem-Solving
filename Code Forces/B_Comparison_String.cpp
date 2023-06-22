#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0, temp = 0;
    for(int i = 0; i < n; i++){
        temp++;
        if(s[i] != s[i+1]){
            ans = max(ans, temp);
            temp = 0;
        }
    }
    print(ans + 1);
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