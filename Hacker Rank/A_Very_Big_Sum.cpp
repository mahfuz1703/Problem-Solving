#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    ll arry[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    for(int i = 0; i < n; i++){
        sum += arry[i];
    }
    cout << sum << "\n";
    return 0;
}