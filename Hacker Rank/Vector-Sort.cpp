#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int o;
    vector <int> v;
    for(int i{0}; i < n; i++){
        cin >> o;
        v.push_back(o);
    }
    sort(v.begin(), v.end());
    for(auto element:v){
        cout << element << " ";
    }
    cout << endl;
    return 0;
}