#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

void solve(){
    string s1, s2; cin >> s1 >> s2;
    string ptr1, ptr2;
    for(auto u: s1){
        char c = u;
        ptr1 += tolower(c);
    }
    for(auto u: s2){
        char c = u;
        ptr2 += tolower(c);
    }
    if(ptr1 > ptr2) print(1);
    else if(ptr1 < ptr2) print(-1);
    else print(0);
}
int main(){
    FASTER

    solve();
    return 0;
}