#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int space = 1; space <= n-i; space++){
            cout << " ";
        }
        for(int p = 1; p <= i; p++){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}