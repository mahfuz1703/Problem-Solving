#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

void solve(){
    string s, ans; cin >> s;

    for(auto u: s){
        char c = tolower(u);
        if(!isVowel(c)){
            ans += '.';
            ans += c;
        }
    }
    print(ans);

}
int main(){
    FASTER

    solve();
    
    return 0;
}