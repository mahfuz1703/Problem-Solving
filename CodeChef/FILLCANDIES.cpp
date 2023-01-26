#include <iostream>
using namespace std;

int main(){
    int i, t, n, k, m;

    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>n>>k>>m;
        int divit = n / (k * m);
        int multt = k * m;
        if(n % multt == 0){
            cout << divit <<endl;
        }
        if(n % multt != 0){
            cout << divit + 1 << endl;
        }
    }

    return 0;
}

