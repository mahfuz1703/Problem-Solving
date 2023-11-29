/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int sz; cin >> sz;
	vector <int> n,p,z;
	for(int i = 0; i < sz; i++){
		int x; cin >> x;
		if(x < 0) n.push_back(x);

		if(x > 0) p.push_back(x);

		if(x == 0) z.push_back(x);
	}

	if(p.size() == 0){
		for(int  i = 1; i <= 2; i++){
			p.push_back(n.back());
			n.pop_back();
		}
	}
	if(n.size() % 2 == 0){
		z.push_back(n.back());
		n.pop_back();
	}

	cout << n.size() << " ";
	for(auto u : n) cout << u << " ";
	cout << "\n";

	cout << p.size() << " ";
	for(auto u : p) cout << u << " ";
	cout << "\n";

	cout << z.size() << " ";
	for(auto u : z) cout << u << " ";
	cout << "\n";
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