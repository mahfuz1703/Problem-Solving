/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
    for(ll i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n; cin >> n;
    if(isPrime(n)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}