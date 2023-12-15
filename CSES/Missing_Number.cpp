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
	vector <ll> v(n-1);
	ll sum = 0;
	for(ll i = 0; i < n-1; i++){
		cin >> v[i];
		sum += v[i];
	}
	ll ans = (n*(n+1)/2) - sum;
	print(ans);
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