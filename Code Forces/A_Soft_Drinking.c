#include <stdio.h>
int main(){
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int t_drink = (k*l)/nl;
    int t_lime = c*d;
    int t_salt = p/np;

    int min_toast;
    if(t_drink < t_lime && t_drink < t_salt){
        min_toast = t_drink;
    }
    else if(t_lime < t_drink && t_lime < t_salt){
        min_toast = t_lime;
    }else{
        min_toast = t_salt;
    }
    printf("%d", min_toast/n);
    return 0;
}