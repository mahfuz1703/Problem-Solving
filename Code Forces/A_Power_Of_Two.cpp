/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool powerOfTwo(ll n){
    if(n == 0) return false;

    return ((ceil(log2(n)) == floor(log2(n))));
}
int main(){
    ll n; cin >> n;
    if(powerOfTwo(n)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}