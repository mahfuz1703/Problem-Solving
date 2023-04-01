#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define loop(x,n) for (int i = x; i < n; i++)

void solve(){
    int a;
    float b;
    cin >> a >> b;
    
    if ((a%5==0) && (b-a-0.5>=0)){
        cout << fixed << setprecision(2) << b-a-0.5 << endl;
    }
    else{
        cout << fixed << setprecision(2) << b << endl;
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
