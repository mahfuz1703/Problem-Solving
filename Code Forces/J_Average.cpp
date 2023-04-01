#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(double arry[], int s){
    double sum = 0;
    for(int i = 0; i < s; i++){
        sum += arry[i];
    }
    cout << fixed << setprecision(7) << sum / s << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    double arry[t];
    for(int i = 0; i < t; i++){
        cin >> arry[i];
    }
    solve(arry, t);
    return 0;
}
