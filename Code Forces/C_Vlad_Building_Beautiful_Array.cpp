#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int s; cin >> s;
    int a[s];
    loop(0, s){
        cin >> a[i];
    }

    vi even, odd;
    loop(0, s){
        if(a[i] % 2 == 0){
            even.push_back(a[i]);
        }else{
            odd.push_back(a[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    bool e = true, o = true;
    loop(0, s){
        if(a[i] % 2 == 0) continue;
        if(odd.empty() || odd[0] >= a[i]){
            e = false;
            break;
        }
    }

    loop(0, s){
        if(a[i] % 2 != 0) continue;
        if(odd.empty() || odd[0] >= a[i]){
            o = false;
            break;
        }
    }

    if(e || o){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}