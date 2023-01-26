#include <iostream>
using namespace std;

int main(){
    int i, t, n, k;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>n>>k;
        cout << n - k << endl;
    }
    return 0;
}
