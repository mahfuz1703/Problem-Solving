#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(x,n) for (int i = x; i < n; i++)

void solve(string str1, string str2){
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    int ans = str1.compare(str2);
    if(ans == 0){
        cout << "0\n";
    }
    else if(ans > 0){
        cout << "1\n";
    }else{
        cout << "-1\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str1, str2; cin >> str1 >> str2;
    solve(str1, str2);
    return 0;
}
