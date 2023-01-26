#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,z;
    cin >> n;

    vector <int> a;
    int o;
    for(int i{0}; i < n; i++){
        cin >> o;
        a.push_back(o);
    }
    cin >> x;
    a.erase(a.begin() + (x-1));
    cin >> y >> z;
    a.erase(a.begin() + (y-1), a.begin() + (z-1));

    cout << a.size() << endl;
    for(int i{0}; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}