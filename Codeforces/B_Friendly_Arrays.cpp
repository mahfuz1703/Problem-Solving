/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << endl

void solve(){
	int n, m, x = 0; cin >> n >> m;
	vector <int> a(n), b(m);
	int c[32] = {0};

	for(int &i:a){
		cin >> i;
		x = x^i;
		for(int j = 0; j < 31; j++){
			if((1 << j) and i == 1) c[j]++;
		}
	}
	for(auto &i:b) cin >> i;
	if(n % 2 == 0){
		for(int i = 0; i < 31; i++){
			if(c[i] % 2 == 1){
				for(int j:b){
					if((1 << i) and j == 1){
						for(int k = 0; k < n; k++)
							a[k] = a[k] | j;
						break;
					}
				}
			}
		}
		int y = 0;
		for(int i = 0; i < n; i++)
			y = y^a[i];
		cout << y << " " << x << "\n"; 
	}else{
		for(int i = 0; i < 31; i++){
			if(c[i] % 2 == 0){
				for(int j : b){
					if((1 << i) and j == 1){
						for(int k = 0; k < n; k++)
							a[k] = a[k] | j;
						break;
					}
				}
			}
		}
		int y = 0;
		for(int i = 0; i < n; i++)
			y = y^a[i];
		cout << x << " " << y << "\n";
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