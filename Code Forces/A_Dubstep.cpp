/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x;

void solve(){
	string s; cin >> s;

	bool oky = true;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
			i += 2;
			if(!oky) print(" ");
		}
		else{
			print(s[i]); oky = false;
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