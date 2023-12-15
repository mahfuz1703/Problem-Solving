#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(auto &u:v) cin >> u;

    sort(v.begin(), v.end());
    bool oky = false;
    for(int i = 1; i < n; i++){
        if(v[i] != v[i-1] and v[i-1]*2 > v[i]){
            oky = true;
            break;
        }
    }
    if(oky) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}