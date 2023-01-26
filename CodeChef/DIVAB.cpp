#include <iostream>
using namespace std;

int main(){
    int i, t;
    cin>>t;
    for(i = 1; i <= t; i++){
        long long x, y, z, m;
        cin>>x>>y>>z;
        if(x % y == 0){
            cout<<"-1" << endl;
            continue;
        }
        m = z;
        if(m % x != 0){
            m = z + x - (m % x);
        }
        while(!(m % x == 0 && m % y != 0)){
            m+=x;
        }
        cout << m << endl;
    }

    return 0;
}
