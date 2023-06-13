#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

void solve(){
    int n , sum; cin >> n;
    while(n){
        sum += (n%10);
        n /= 10;
    }
    string temp, s = to_string(sum);
    temp = s;
    reverse(temp.begin(), temp.end());
    if(s == temp) print(1);
    else print(0);
}
int main(){
    FASTER

    solve();
    return 0;
}