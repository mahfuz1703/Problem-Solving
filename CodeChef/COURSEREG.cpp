#include <iostream>
using namespace std;

int main(){
    int i, t, n,m,k;

    cin>>t;
    for(i = 1; i <= t; i++){
        cin >> n >> m >> k;
        if(n <= (m - k)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
