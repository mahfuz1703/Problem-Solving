/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	string s; cin >> s;
	int n = s.size();
	int ans = 1, ms = 1;
	for(int i = 0; i < n-1; i++){
		if(s[i] == s[i+1]){
			ms++;
			ans = max(ans, ms);
		}else ms = 1;
	}
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