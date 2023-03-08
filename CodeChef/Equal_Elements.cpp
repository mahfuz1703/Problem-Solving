#include <bits/stdc++.h>
using namespace std;

int getMinOperations(int *arr, int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; ++i)
    {
        hash[arr[i]]++;
    }
    int maxFrequency = 0;
    for (auto elem : hash)
    {
        if (elem.second > maxFrequency)
        {
            maxFrequency = elem.second;
        }
    }
    return (n - maxFrequency);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << getMinOperations(arr, n) << endl;
    }
    return 0;
}