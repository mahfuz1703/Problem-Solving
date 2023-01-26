#include <iostream>
using namespace std;

int main(){
    int i, t;
    cin>>t;
    for(i = 0; i < t; i++){
        int a, b;
        cin >>a>>b;
        int maxx = max(a, b);
        (maxx == a)? cout << "A" << endl : cout << "B" << endl;
    }
    return 0;
}
