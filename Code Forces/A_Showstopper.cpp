#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(x,n) for (int i = x; i < n; i++)

void solve(int a[], int b[], int s){
    int a_max = 0;
    int b_max = 0;
    loop(0, s){
        if (a[i] < b[i]) swap(a[i], b[i]);
        a_max = max(a_max, a[i]);
        b_max = max(b_max, b[i]);
        
    }
    
    if(a_max == a[s-1] and b_max == b[s-1]){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int s; cin >> s;
        int a[s+1], b[s+1];
        loop(0,s) cin >> a[i];
        loop(0, s) cin >> b[i];
        solve(a, b, s);        
    }
    return 0;
}
