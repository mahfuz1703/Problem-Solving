// Problem: https://vjudge.net/contest/468964#problem/N
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// bool isPowerOfTwo(int n)
// {
//     if (n == 0)
//         return false;
 
//     return (ceil(log2(n)) == floor(log2(n)));
// }
// cout << ceil(log2(4)) << " = " << ceil(log2(4)) << "\n";

int main(){
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll power = 1;
        while(2 * power <= n){
            power *= 2;
        }
        cout << n*(n + 1) / 2 - 2 * (power * 2 - 1) << "\n";
    }
    return 0;
}