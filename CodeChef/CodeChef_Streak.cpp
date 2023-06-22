#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

void solve(){
    int s; cin >> s;
    int o, a, ans, n;
    o = a = ans = 0;

    loop(0, s){
        cin >> n;
        if (n != 0) ans++;
        else{
            o = max(o, ans); ans = 0;
        } 
    }
    o = max(o, ans); ans = 0;

    loop(0, s){
        cin >> n;
        if (n != 0) ans++;
        else{
            a = max(a, ans); ans = 0; 
        }
    }
    a = max(a, ans);

    if(o > a) print("Om");
    else if(o < a) print("Addy");
    else print("Draw");
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