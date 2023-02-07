// Problem: https://vjudge.net/contest/468964#problem/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, ans = 0; cin >> m >> n;
    if(m > n){
        ans = m + (m-1);
    }
    else if(m < n){
        ans = n + (n - 1);
    }
    else{
        ans = m + n;
    }
    cout << ans << "\n";
    return 0;
}