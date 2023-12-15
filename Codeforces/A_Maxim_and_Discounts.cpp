/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int m, n; cin >> m;
	vector <int> q(m);
	for( int i = 0; i < m; i++) cin >> q[i];

	cin >> n;
	vector <int> a(n);
	for( int i = 0; i < n; i++) cin >> a[i];

	sort(q.begin(), q.end());
	sort(a.begin(), a.end());

	int cnt = q[0], ans = 0;
	for(int i = n-1; i >= 0; i--){
		ans += a[i];
		cnt--;
		if(cnt == 0){
			cnt = q[0];
			i -= 2;
		}
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