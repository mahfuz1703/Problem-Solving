#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, y; cin >> x >> y;
    solve(x, y);
    return 0;
}
