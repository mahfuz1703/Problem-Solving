/// In the name of ALLAH
/// La ilaha illallah Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dekhaw(x) cout << x << "\n"

void somadhan(){
    int n; cin >> n;
    set < int > s;
    int p; cin >> p;
    loop(0, p){
        int a; cin >> a;
        s.insert(a);
    }
    cin >> p;
    loop(0, p){
        int a; cin >> a;
        s.insert(a);
    }

    if(s.size() == n) dekhaw("I become the guy.");
    else dekhaw("Oh, my keyboard!");
}
int main(){
    FASTER

    somadhan();
    return 0;
}

/// Alhamdulilla for everything