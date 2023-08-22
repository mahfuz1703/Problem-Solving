/// In the name of ALLAH
/// La ilaha illallah Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int a, b; cin >> a >> b;
    ll s = 0, t = 0;
    loop(0, a){
        int x; cin >> x;
        s += x;
    }
    loop(0, b){
        int x; cin >> x;
        t += x;
    }
    if(s > t) dekhaw("Tsondu");
    else if(s < t) dekhaw("Tenzing");
    else dekhaw("Draw");
}
int main(){
    FASTER

    int t; cin >> t;
    while(t--){
        somadhan();
    }
    return 0;
}

/// Alhamdulilla for everything