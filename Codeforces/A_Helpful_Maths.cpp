#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define loop1(x1,n1) for (int i = x1; i < n1; i = i+2)

void solve(){
    string s; cin >> s;
    vi v;
    loop1(0, s.size()){
        v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    loop(0, v.size()){
        if(i) cout << "+";
        cout << v[i];
    }
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
