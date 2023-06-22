#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"

// void solve(){
    
// }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    map < string, int > visit;
    while(t--){
        string str; cin >> str;

        if(visit[str] != 0) print(str + to_string(visit[str]));
        else print("OK");
        
        visit[str]++;
    }
    return 0;
}