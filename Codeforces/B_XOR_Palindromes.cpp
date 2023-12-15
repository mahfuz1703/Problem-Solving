/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    
    int i = 0, j = n-1;
    int gp = 0, b = 0;
    while(i < j){
        if(s[i] == s[j]) gp += 2;
        else b++;

        i++; j--;
    }

    string ans = "";
    for( int i = 0; i <= n; i++){
        int total = i;
        total -= b;

        if(total < 0){
            ans.push_back('0');
            continue;
        }
        total=max(0,max((total%2),total-gp)-(n%2));

        if(total == 0) ans.push_back('1');
        else ans.push_back('0');
    }
    print(ans);
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything