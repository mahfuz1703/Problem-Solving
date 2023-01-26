#include <iostream>
using namespace std;

int main(){
    int i, t;
    cin>>t;
    for(i = 1; i <= t; i++){
        int lengthArry;
        cin>>lengthArry;
        int ele[lengthArry];
        long long ans = 0, countt = 0;
        for(int i = 0; i < lengthArry; i++){
            cin>>ele[i];
            if(ele[i] == 1){
                countt++;
            }
            else{
                ans += (countt*(countt+1)/2);
                countt = 0;
            }
        }
        ans += (countt*(countt+1)/2);
        cout << ans << endl;
    }
    return 0;
}
