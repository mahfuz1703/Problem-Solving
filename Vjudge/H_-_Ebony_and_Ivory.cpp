// Problem: https://vjudge.net/contest/468964#problem/H
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= 5000; i++)
    {
        for (int j = 0; j <= 5000; j++)
        {
            if (i * a + j * b == c)
            {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }
    cout << "No" << '\n';
    return 0;
}