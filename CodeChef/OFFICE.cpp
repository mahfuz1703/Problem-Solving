#include <iostream>
using namespace std;

int main(){
    int i, t, x, y;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>x>>y;
        cout<< (x*4) + y << endl;
    }
    return 0;
}
