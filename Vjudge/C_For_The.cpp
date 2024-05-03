#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int magic_squares_3x3[8][9] = {
    {8, 1, 6, 3, 5, 7, 4, 9, 2},
    {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {2, 9, 4, 7, 5, 3, 6, 1, 8},
    {6, 7, 2, 1, 5, 9, 8, 3, 4},
    {6, 1, 8, 7, 5, 3, 2, 9, 4},
    {8, 3, 4, 1, 5, 9, 6, 7, 2},
    {4, 9, 2, 3, 5, 7, 8, 1, 6},
    {2, 7, 6, 9, 5, 1, 4, 3, 8}
};
int matrix[9];

void solve(){
    for (int i = 0; i < 9; i++) cin >> matrix[i];
    int min_cost = 100;
    for (int i = 0; i < 8; i++) {
        int cost = 0;
        for (int j = 0; j < 9; j++)
            cost += abs(matrix[j] - magic_squares_3x3[i][j]);

        if (cost < min_cost) min_cost = cost;
    }
    cout << min_cost << "\n";
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