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
	vector <int> v(3001, 0);
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		v[x] = 1;
	}
	for(int i = 1; i <= 3001; i++){
		if(v[i] == 0){
			print(i); break;
		}
	}
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