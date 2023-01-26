//Author: Mohammad Mahfuz
//Gmail: mahfuzmia1703@gmail.com

#include <stdio.h>

int main(){
    int x;
    float y, consumption;

    scanf("%d %f", &x, &y);

    consumption = x / y;

    printf("%.3f km/l\n", consumption);

    return 0;
}