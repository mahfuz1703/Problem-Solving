#include <iostream>
using namespace std;

int main(){
    int i, t, n, k;

    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>n>>k;
        if(n < k){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
