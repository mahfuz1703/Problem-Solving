#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int n; cin >> n;
    int a = 0, b = 0, ab = 0, o = 0;
    loop(0, n){
        string s; cin >> s;
        if(s == "A") a++;
        else if(s == "B") b++;
        else if(s == "AB") ab++;
        else o++;
    }
    ll ans = max(a, b);
    ans += ab;
    ans += o;

    dekhaw(ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}