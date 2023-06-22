#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int n; cin >> n;
    if(n <= 3) dekhaw("BRONZE");
    else if(n > 3 && n <= 6) dekhaw("SILVER");
    else dekhaw("GOLD");
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