#include <iostream>
using namespace std;

int main(){
    int i, t;
    cin>>t;
    for(i = 0; i < t; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int max1 = max(a,b);
        int max2 = max(c,d);
        cout << max1 + max2 << endl;
    }
    return 0;
}
