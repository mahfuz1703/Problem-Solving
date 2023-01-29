#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, A[101010];
int main() {
	cin >> N;
	for(int i{0}; i < N; i++){
        cin >> A[i];
    }
 
	int plus = 0, minus = 0, zero = 0;
	for(int i{0}; i < N; i++) {
		if (0 < A[i]) plus++;
		else if (A[i] < 0) minus++;
		else zero++;
	}
 
	ll ans = 0;
	if (minus % 2 == 0) {
		for(int i{0}; i < N; i++) ans += abs(A[i]);
	}
	else if (0 < zero) {
		for(int i{0}; i < N; i++) ans += abs(A[i]);
	}
	else {
		int mi = minus;
		for(int i{0}; i < N; i++) min(mi, abs(A[i]));
		for(int i{0}; i < N; i++) ans += abs(A[i]);
		ans -= mi * 2;
	}
	cout << ans << endl;
    return 0;
}