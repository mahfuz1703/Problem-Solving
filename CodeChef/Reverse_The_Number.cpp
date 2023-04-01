#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int n; cin >> n;
    int reversed_number = 0, remainder;
    while(n){
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    cout << reversed_number <<"\n";
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
