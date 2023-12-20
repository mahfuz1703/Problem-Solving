/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    if(n == 4){
        if((v[0] + v[1] == v[2] + v[3])){
            print("NO");
            return;
        }
    }
    map <int, int> mp;
    for(int i = 0; i < n; i++) mp[v[i]]++;

    if(mp.size() == 1) print("NO");
    else print("YES");
}
int main(){
	FASTER

	int t = 1;
	cin >> t;
	while(t--) solve();
	return 0;
}

/// Alhamdulilla for everything
