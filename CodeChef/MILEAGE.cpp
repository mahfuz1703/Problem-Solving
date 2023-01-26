#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        double n,x,y,a,b;
        cin>>n>>x>>y>>a>>b;
        double pCost = (n / a) * x;
        double dCost = (n / b) * y;
        if(pCost < dCost){
            cout << "PETROL" << endl;
        }
        else if(dCost < pCost){
            cout << "DIESEL" << endl;
        }
        else{
            cout << "ANY" << endl;
        }
    }
    return 0;
}

