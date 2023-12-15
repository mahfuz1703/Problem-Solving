#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

void solve(){
    string s; cin >> s;
    
    int f1 = s.find("101");
    int f2 = s.find("010");

    // print(f1);
    // print(f2);

    if((f1 != string::npos) || (f2 != string::npos)) print("Good");
    else print("Bad");

    // OR -------------
    // if((f1 != -1) || (f2 != -1)) print("Good");
    // else print("Bad");
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