/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int n,k,x; cin >> n >> k >> x;
	if(n < k or x+1 < k) print("-1");
	else{
		int ans = 0;
		for(int i = 0; i < k; i++) ans += i;

		if(x == k) x -= 1;

		for(int i = 0; i < (n-k); i++) ans += x;

		print(ans);
	}
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