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

	if(n != 2 and n != 3){
		for(int i = 1; i <= n; i++){
			if(i % 2 == 0) cout << i << " ";
		}
		for(int i = 1; i <= n; i++){
			if(i & 1) cout << i << " ";
		}
		cout << "\n";
	}else cout << "NO SOLUTION\n";
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