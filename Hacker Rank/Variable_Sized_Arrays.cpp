#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector <int> a[n];
    for(int i{0}; i < n; i++){
        int size;
        cin >> size;
        int o;
        for(int j{0}; j < size; j++){
            cin >> o;
            a[i].push_back(o);
        }
    }
    int arryNumber, findNumber;
    for(int k{1}; k <= q; k++){
        cin >> arryNumber >> findNumber;
        cout << a[arryNumber][findNumber] << endl;
    }
    return 0;
}