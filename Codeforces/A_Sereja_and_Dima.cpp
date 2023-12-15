#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int t; cin >> t;
    vi v(t);
    loop(0, t) cin >> v[i];

    int s = 0, d = 0;
    bool flag = true;
    while(!v.empty()){
        if(flag){
            if(v[0] > v.back()){
                s += v[0];
                v.erase(v.begin());
            }else{
                s += v.back();
                v.pop_back();
            }
            flag = false;
        }else{
            if(v[0] > v.back()){
                d += v[0];
                v.erase(v.begin());
            }else{
                d += v.back();
                v.pop_back();
            }
            flag = true;
        }
    }
    cout << s << " " << d << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}