#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int a1[n];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(i == a[j]){
                a1[i] = j+1;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << a1[i] << " ";
    }
    cout << "\n";
    return 0;
}