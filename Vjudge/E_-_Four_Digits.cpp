#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if(n >= 0 && n < 10){
        cout << 0 << 0 << 0 << n << "\n";
    }
    else if(n > 9 && n < 100){
        cout << 0 << 0 << n << "\n";
    }
    else if(n > 99 && n < 1000){
        cout << 0 << n << "\n";
    }
    else{
        cout << n << "\n";
    }
    return 0;
}