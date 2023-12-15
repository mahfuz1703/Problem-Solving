#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    long long n, mx = 0;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
    {
        mx = max(mx, (long long)(max((a[i]), (a[i - 1]))) * min(a[i], a[i - 1]));
    }
    cout << mx << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}