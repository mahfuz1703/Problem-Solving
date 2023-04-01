#include <bits/stdc++.h>
using namespace std;

void solve(){
    char c; cin >> c;
    if(c >= 'A' && c <= 'Z'){
        cout << (char)tolower(c) << "\n";
    }else{
        cout << (char)toupper(c) << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
