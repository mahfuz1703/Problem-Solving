#include <iostream>
using namespace std;

int main(){
    int t, x, y, best;

    cin>>t;
    for(int i = 1; i <= t; i++){
        cin >> x >> y;
        best = max(x,y);
        cout<<best<<endl;
    }
    return 0;
}

