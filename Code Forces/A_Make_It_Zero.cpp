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
	for(int i = 0; i < n; i++) cin >> v[i];

	if(n & 1){
		print("4");
		cout << "1" << " " << n-1 << "\n";
		cout << "1" << " " << n-1 << "\n";
		cout << n-1 << " " << n << "\n";
		cout << n-1 << " " << n << "\n";
	}else{
		print("2");
		cout << "1" << " " << n << "\n";
		cout << "1" << " " << n << "\n";
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