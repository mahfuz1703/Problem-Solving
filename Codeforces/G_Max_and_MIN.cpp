#include <bits/stdc++.h>
using namespace std;
#define ll long long

int Max(int arry[], int s){
    int maxx = 0;
    for(int i = 0; i < s; i++){
        if(arry[i] > maxx){
            maxx = arry[i];
        }
    }
    return maxx;
}
int Min(int arry[], int s){
    int minn = 100001;
    for(int i = 0; i < s; i++){
        if(arry[i] < minn){
            minn = arry[i];
        }
    }
    return minn;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s; cin >> s;
    int arry[s];
    for(int i = 0; i < s; i++){
        cin >> arry[i];
    }
    cout << Min(arry, s) << " " << Max(arry, s) << "\n";
    return 0;
}
