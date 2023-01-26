#include <stdio.h>

int main(){
    int x;
    double y, balance;

    scanf("%d %lf", &x, &y);
    if(x % 5 == 0 && (x + 0.5) <= y){
        balance = (y-x) - 0.50;
        printf("%.2lf\n", balance);
    }
    else{
        printf("%.2lf\n", y);
    }

    return 0;
}
