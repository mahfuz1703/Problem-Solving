#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i{1}; i <= t; i++){
        int n; cin >> n;
        long long fact = 1;
        for(int i{n}; i > 0; i--){
            fact = fact * i;
        }
        cout << fact << "\n";
    }
    
    return 0;
}