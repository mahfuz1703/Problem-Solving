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
    stack <int> st;
    st.push(v[0]);
    int ans = 0;
    for(int i = 1; i < n; i++){
        int value = v[i];
        if(st.size() == 0) st.push(value);
        else{
            int tp = st.top();
            if(tp == value) st.push(value);
            else{
                st.pop(); ans++;
            }
        }
    }
    print(ans);
}
int main(){
	FASTER

	int t = 1;
	cin >> t;
	while(t--) solve();
	return 0;
}

/// Alhamdulilla for everything
