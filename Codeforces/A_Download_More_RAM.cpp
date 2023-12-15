/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int n, k; cin >> n >> k;
	vector<pair<int,int>> v(n);
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		v[i].first = x;
	}
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		v[i].second = x;
	}
	sort(v.begin(), v.end());
	int ans = k;
	for(int i = 0; i < n; i++){
		if(v[i].first <= ans) ans += v[i].second;
	}
	print(ans);
}
int main(){
	FASTER

	int t = 1;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}

/// Alhamdulilla for everything	