#include <bits/stdc++.h>

using namespace std;

bool is_sorted(string &s)
{
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i - 1] > s[i])
        {
            return false;
        }
    }
    return true;
}

int min_operations(string &s)
{
    int n = s.length();
    vector<int> next(n);
    for (int i = n - 1; i >= 0; --i)
    {
        next[i] = n;
        for (int j = i + 1; j < n; ++j)
        {
            if (s[j] < s[i] && j < next[i])
            {
                next[i] = j;
            }
        }
    }

    int operations = 0;
    int i = 0;
    while (i < n && !is_sorted(s))
    {
        if (next[i] == n)
        {
            return -1; // Cannot be sorted
        }
        operations++;
        swap(s[i], s[next[i]]);
        i = next[i];
    }
    return operations;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string s;
        cin >> s;
        int operations = min_operations(s);
        if (operations == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << operations << endl;
        }
    }
    return 0;
}
