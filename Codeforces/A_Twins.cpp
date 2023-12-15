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
	int sum = 0;
	for( int i = 0; i < n; i++){
		cin >> v[i];
		sum += v[i];
	}
	sum = sum / 2;
	sort(v.begin(), v.end());

	int sum2 = 0, cnt = 0;
	for( int i = n-1; i >= 0; i--){
		sum2 += v[i];
		cnt++;
		if(sum2 > sum) break;
	}
	print(cnt);
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