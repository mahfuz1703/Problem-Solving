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
    
    int a[101][101];
    int sum = 0, sum1 = 0, sum2 = 0;
    loop(0, n){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
        sum += a[i][0];
        sum1 += a[i][1];
        sum2 += a[i][2];
    }
    if(sum == 0 and sum1 == 0 and sum2 == 0) dekhaw("YES");
    else dekhaw("NO");
}
int main(){
    FASTER

    somadhan();
    return 0;
}

/// Alhamdulilla for everything