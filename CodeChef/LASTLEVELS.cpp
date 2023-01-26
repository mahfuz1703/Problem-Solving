#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int x, y, z, normalTime, extraTime;
        cin>>x>>y>>z;
        normalTime = x * y;
        if(x > 3){
            extraTime = ((x - 1) / 3) * z;
        }
        else{
            extraTime = 0;
        }
        cout << normalTime + extraTime << endl;
    }
    return 0;
}
