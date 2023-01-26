#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int i, t;
    cin>>t;
    for(i = 0; i < t; i++){
        long long int n, m;
        cin>>n>>m;
        long long int ans1, ans2;
        if(m < 2*n){
            cout << m <<" "<<m <<endl;
        }
        else if(m >= 2*n && m % n == 0){
            cout << m << " " << n << endl;
        }
        else{
            long long int x = m / 2;
            if(m >= 2*n){
                x = 2*n;
            }
            int Difference = INT_MIN;
            for(int i = n; i < x; i++){
                long long d = m/i;
                long long int c_diff = (i*d) - i;
                if(c_diff > Difference){
                    ans1 = i;
                    ans2 = i*d;
                    Difference = c_diff;
                }
            }
            cout << ans1 << " " << ans2 << endl;
        }
    }
    return 0;
}
