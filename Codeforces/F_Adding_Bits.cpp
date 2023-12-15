/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl
 
void solve(){
	ll a,  b; cin >> a >> b;
	vector <int> av, bv, ans;

	for(int i = 31; i >= 0; i--){
		ll k = a >> i;
    	if (k & 1) av.push_back(1);
    	else av.push_back(0);
	}

	for(int i = 31; i >= 0; i--){
		ll k = b >> i;
    	if (k & 1) bv.push_back(1);
    	else bv.push_back(0);
	}

	for(int i = 0; i < 32; i++){
		if(av[i] == bv[i]) ans.push_back(0);
		else ans.push_back(av[i] + bv[i]);
	}

	ll decValue = 0;
	int base = 2, pw = 0;
	for(int i = 31; i >= 0; i--){
		decValue += ans[i] * pow(base, pw);
		pw++;
	}
	print(decValue);
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