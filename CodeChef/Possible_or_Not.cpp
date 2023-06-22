#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

void solve(){
    int s, k; cin >> s >> k;
    int arry[s];
    loop(0,s) cin >> arry[i];

    bool oky = false;
    loop(0, s){
        for(int j = 0; j < s; j++){
            if((arry[i] & arry[j]) == k){
                oky = true;
                break;
            }
        }
    }
    if(oky) print("YES");
    else print("NO");
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