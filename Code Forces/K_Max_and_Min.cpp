/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    cout << min({a,b,c}) << " " << max({a,b,c}) << "\n";
    return 0;
}