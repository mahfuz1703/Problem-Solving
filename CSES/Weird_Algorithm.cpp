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
	vector <ll> ans;
	while(n != 1){
		ans.push_back(n);
		if(n & 1) n = (n*3) + 1;
		else n /= 2;
	}
	ans.push_back(1);

	for(auto u : ans) cout << u << " ";
	cout << "\n";
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