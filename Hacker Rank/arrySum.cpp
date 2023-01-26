#include <iostream>
using namespace std;

int main(){
    int n;
    long long int sum = 0;
    cin >> n;

    int arry[n];
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    for(int i = 0; i < n; i++){
        sum += arry[i];
    }
    cout << sum << endl;
    return 0;
}