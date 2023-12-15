#include <bits/stdc++.h>
using namespace std;

int maxx = INT_MIN;
int main(){
    int n; cin >> n;
    for(int i{1}; i <= n; i++){
        int a; cin >> a;
        maxx = max(maxx, a);
    }
    cout << maxx << "\n";
    return 0;
}