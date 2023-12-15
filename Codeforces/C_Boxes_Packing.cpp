#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int n; cin >> n;
    map<int, int> cnt;

    loop(0, n){
        int a; cin >> a;
        cnt[a]++;
    }
    int mx = 0;
    for(auto u : cnt){
        mx  = max(mx, u.second);
    }
    dekhaw(mx);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    somadhan();
    return 0;
}