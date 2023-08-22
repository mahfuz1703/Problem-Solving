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

    loop(0, n){
        int x; cin >> x;
        s.insert(x);
    }
    
    if(s.size() <= 1) dekhaw("NO");
    else{
        auto it = ++s.begin();
        dekhaw(*it);
    }
}
int main(){
    FASTER

    somadhan();
    return 0;
}

/// Alhamdulilla for everything