/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define MOD 1000000007
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define print(x) cout << x << "\n"

void solve(){
    string mid, fina;
    int extra;
    cin >> mid >> fina >> extra;

    if(mid == "A" or fina == "A"){
        cout << "FaiL\n";
        return;
    }

    int totalM = stoi(mid) + stoi(fina) + extra;

    if(totalM >= 40) print("PasS");
    else print("FaiL");
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    int i = 1;
    while(t--){
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
    return 0;
}

/// Alhamdulilla for everything