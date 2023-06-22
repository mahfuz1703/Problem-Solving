#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int n; cin >> n;
    vector <string> s(n);
    loop(0, n) cin >> s[i];

    unordered_map<string, int> m;
    string ans = "";

    for(int i = s.size()-1; i >= 0; i--){
        string str = s[i];
        if(m.find(str) != m.end()) continue;
        else{
            ans += str[str.size()-2];
            ans += str[str.size()-1];
            m[str]++;
        }
    }
    dekhaw(ans);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    somadhan();
    return 0;
}