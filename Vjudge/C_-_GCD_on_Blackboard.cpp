#include <bits/stdc++.h>
using namespace std;

int N, A[101010];
segTree<int, 1 << 17> st;
void _main() {
	cin >> N;
	for(int i{0}; i < N; i++) cin >> A[i];
	for(int i{0}; i < N; i++) st.update(i, A[i]);
 
	int ans = 0;
	for(int i{0}; i < N; i++) {
		int g = 0;
		g = gcd(g, st.get(0, i));
		g = gcd(g, st.get(i + 1, N));
		max(ans, g);
	}
	cout << ans << endl;
    return 0;
}