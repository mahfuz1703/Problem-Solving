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
	string m = "hello";
	int cnt = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == m[cnt]) cnt++;
	}

	if(cnt == 5) print("YES");
	else print("NO");
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