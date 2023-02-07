// Problem: https://vjudge.net/contest/468964#problem/J
#include <bits/stdc++.h>
using namespace std;

int main(){
    double regularPrice, afterDiscountPrice; cin >> regularPrice >> afterDiscountPrice;

    double discount = 100.0 - (100.0 * afterDiscountPrice) / regularPrice;

    cout << discount << "\n";
    return 0;
}