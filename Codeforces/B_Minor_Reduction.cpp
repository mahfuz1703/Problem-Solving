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
	int n = s.size(), sum = 0, idx = -1;
	for(int i = n-1; i >= 0; i--){
		sum = (s[i] - '0') + (s[i-1] - '0');
		if(sum > 9){
			idx = i;
			break;
		}
	}
	if(idx != -1){
		for(int i = 0; i < idx - 1; i++) print(s[i]);
		print(sum);
		for(int i = idx+1; i < n; i++) print(s[i]);

		cout << "\n";
	}else{
		cout << (s[0]-'0') + (s[1]-'0');
		for(int i = 2; i < n; i++) print(s[i]);

		cout << "\n";
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