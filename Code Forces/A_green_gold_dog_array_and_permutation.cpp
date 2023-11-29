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
	vector<pair<int, int>> v;

	for(int i = 0; i < n; i++){
		int a; cin >> a;
		v.push_back({a, i});
	}
	sort(v.begin(), v.end());
	int x = n;
	for( int i = 0; i < n; i++){
		v[i].first = x;
		x--;
	}

	int ans[n];
	for( int i = 0; i < n; i++){
		ans[v[i].second] = v[i].first;
	}
	for(int i = 0; i < n; i++){
		cout << ans[i] << " ";
	}
	cout << "\n";
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