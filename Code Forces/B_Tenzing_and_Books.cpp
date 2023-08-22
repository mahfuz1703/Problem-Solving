/// In the name of ALLAH
/// La ilaha illallah Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

bool isPossible(int n, int x, const vector<vector<int>>& stacks) {
    for (int i = n; i >= 0; --i){
        if ((x >> i) & 1){
            bool found = false;
            for (const auto& stack : stacks) {
                for (int book : stack) {
                    if ((book >> i) & 1){
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (!found) return false;
        }
    }
    return true;
}
int main() {
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<vector<int>> stacks(3, vector<int>(n));
        for (int i = 0; i < 3; ++i){
            for (int j = 0; j < n; ++j){
                cin >> stacks[i][j];
            }
        }

        bool possible = isPossible(n, x, stacks);
        if(possible) dekhaw("Yes");
        else dekhaw("No");
    }

    return 0;
}

/// Alhamdulilla for everything