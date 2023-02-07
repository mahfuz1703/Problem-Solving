// Problem: https://vjudge.net/contest/468964#problem/R
#include <bits/stdc++.h>
using namespace std;

int main(){
    int y; cin >> y;
    while(true){
        y += 1;
        int a = y % 10;
        int b = y / 10 % 10;
        int c = y / 100 % 10;
        int d = y / 1000;
        if(a != b && a != c && a != d && b != c && b != d && c !=d){
            break;
        }
    }
    cout << y << "\n";
    return 0;
}