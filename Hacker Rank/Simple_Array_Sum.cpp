#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arry[n];
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arry[i];
    }
    cout << sum << "\n";
    return 0;
}