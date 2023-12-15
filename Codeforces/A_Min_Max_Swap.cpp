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
	vector <int> a(n), b(n);

	for(int i = 0; i < n; i++) cin >> a[i];
	
	for(int i = 0; i < n; i++) cin >> b[i];

	for(int i = 0; i < n; i++){
		if(b[i] >= a[i]) swap(b[i], a[i]);
	}
	
	int mx_a = *max_element(a.begin(), a.end());
	int mx_b = *max_element(b.begin(), b.end());

	print(mx_a*mx_b);
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