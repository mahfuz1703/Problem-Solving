#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main(){
    int n; cin >> n;
    string s; cin >> s;
    solve(n,s);
    return 0;
}