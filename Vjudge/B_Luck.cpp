#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int N; cin >> N;
    
    vector <int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];


    unordered_map<int, int> freq;
    int x = 0;
    for (int u : A) {
        freq[u]++;
        x = max(x, freq[u]);
    }
    cout << A.size() - x << "\n";
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