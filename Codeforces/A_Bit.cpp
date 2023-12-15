#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int cnt = 0;
    int n;
    cin >> n;
    while (n--){
        string str; cin >> str;
        if (str == "X++" || str == "++X"){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    cout << cnt << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
