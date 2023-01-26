//Author: Mohammad mahfuz
//Gmail: mahfuzmia1703@gmail.com

#include <stdio.h>

int main(){
    int time, speed;
    double spent_fuel = 12;
    double need_fuel;

    scanf("%d %d", &time, &speed);

    need_fuel = (time * speed) / spent_fuel;

    printf("%.3lf\n", need_fuel);

    return 0;
}