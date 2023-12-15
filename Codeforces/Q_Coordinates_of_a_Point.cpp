#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    float x, y; cin >> x >> y;

    if(x == 0 && y == 0) dekhaw("Origem");
    else if(x != 0 && y == 0) dekhaw("Eixo X");
    else if(x == 0 && y != 0) dekhaw("Eixo Y");
    else if(x > 0 && y > 0) dekhaw("Q1");
    else if(x < 0 && y > 0) dekhaw("Q2");
    else if(x < 0 && y < 0) dekhaw("Q3");
    else dekhaw("Q4");
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    somadhan();
    return 0;
}