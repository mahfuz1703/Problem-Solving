/// Problem: https://vjudge.net/contest/468964#problem/I
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a, b, c; cin >> a >> b >> c;
    ll sumLeft = pow(a,2) + pow(b,2);
    ll sumRight = pow(c,2);

    if(sumLeft < sumRight){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}