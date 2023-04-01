#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    // int n = stoi(s);
    if(s >= "0" && s <= "9"){
        cout << "IS DIGIT\n";
    }
    else if((s >= "A" && s <= "Z") || (s >= "a" && s <= "z")){
        if(s >= "A" && s <= "Z"){
            cout << "ALPHA\n" << "IS CAPITAL\n";
        }
        else{
            cout << "ALPHA\n" << "IS SMALL\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
