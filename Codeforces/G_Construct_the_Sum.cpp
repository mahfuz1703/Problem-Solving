#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
		ll n,s;
		cin>>n>>s;
		vector<int> v;

		if(n*(n+1) / 2 < s){
			cout<<"-1";
		}else {
			ll sum = 0;
			
			for(int j = n; j >= 1; j--){
				if(sum+j <= s){
					sum+=j;
					v.push_back(j);
				}
				if(sum == s){
					break;
				}
			}
		}
		for(auto u : v){ 
			cout<< u <<" ";
		}
		cout<<endl;
}
int main(){
	int t = 1;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}