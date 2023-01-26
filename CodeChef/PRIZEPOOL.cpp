#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int x,y;
        cin>>x>>y;
        int top10Cost = 10 * x;
        int otherCost = (100-10) * y;
        cout << top10Cost + otherCost << endl;
    }
    return 0;
}
