#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void solve(){
    int n, q; cin >> n >> q;
    map < string, string > m;

    loop(0, n){
        string name, ip; cin >> name >> ip;
        m[ip] = name;
    }
    loop(0, q){
        string name, ip; cin >> name >> ip;
        ip.pop_back();
        cout << name << " " << ip << "; #" << m[ip] << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}