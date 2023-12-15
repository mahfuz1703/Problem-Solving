/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, q;
    cin >> s >> q;
    int arry[s];
    for (int i = 0; i < s; i++){
        cin >> arry[i];
    }
    bool found = false;
    int a;
    while (q--){
        cin >> a;
        int left = 0;
        int right = s-1;
        int mid = (left + right) / 2;
        for (int i = 0; i < s; i++){
            if(arry[mid] == a){
                cout << "found\n";
                found = true;
            }
        }
        if(!found){
            cout << "not found\n";
        }
        found = false;
    }
    return 0;
}