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

double PI = 2*acos(0.0);
void solve(){
    int n; cin >> n;
    vector<pair<int, int>> person(n);

    for (int i = 0; i < n; i++) {
        cin >> person[i].first >> person[i].second;
    }
    double maxD = 0.0;
    for (int i = 0; i < n; i++) {
        double distance = sqrt((person[i].first * person[i].first) + (person[i].second * person[i].second));
        maxD = max(maxD, distance);
    }

    double mnC = 2.0 * PI * maxD;

    cout << fixed << setprecision(6) << mnC << endl;
}
int main(){
    FASTER

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/// Alhamdulilla for everything