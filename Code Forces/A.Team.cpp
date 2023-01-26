#include <iostream>
using namespace std;

int main(){
    int i, n, p, v, t, total = 0;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>p>>v>>t;
        if((p + v + t) >= 2){
            total++;
        }
    }
    cout<<total<<endl;

    return 0;
}
