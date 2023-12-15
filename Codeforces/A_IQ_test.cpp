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
	int eIndx, oIndx, eCnt = 0, oCnt = 0;
	for(int i = 0; i < n; i++){
		if(v[i] & 1){
			oCnt++;
			oIndx = i+1;
		}else{
			eCnt++;
			eIndx = i+1;
		}
	}
	if(eCnt > oCnt) print(oIndx);
	else print(eIndx);

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