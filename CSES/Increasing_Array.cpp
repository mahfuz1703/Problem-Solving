/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	ll n; cin >> n;
	vector <ll> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];

	ll ans = 0;
	for(int i = 1; i < n; i++){
		if(v[i] < v[i-1]){
			ans += v[i-1] - v[i];
			v[i] = (v[i-1] - v[i]) + v[i];
		}
	}
	print(ans);
	// for(auto u : v) cout << u << " ";
	// cout << "\n";
}
int main(){
	FASTER

	int t = 1;
	// cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}

/// Alhamdulilla for everything