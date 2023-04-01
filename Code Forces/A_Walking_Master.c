#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        if (d < b){
            printf("-1\n");
        }else{
            int long long dif = d - b;
            a += dif;
            if (a < c){
                printf("-1\n");
            }else{
                dif += a - c;
                printf("%lld\n", dif);
            }
        }
    }
    return 0;
}