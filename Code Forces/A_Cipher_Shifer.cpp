#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vs vector<string>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";

    for(int i = 0, j = i+1; j < n;){
        if(s[i] == s[j]){
            ans.push_back(s[i]);
            i = j + 1; j = j + 2;
        }else{
            j++;
        }
    }
    cout << ans << "\n";
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