#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    int reminder = a % b;
    return gcd(b, reminder);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int gcd_ = gcd(a, b);
    cout << gcd_ << endl;
    return 0;
}