//Author: Mohammad Mahfuz
//Gmail: mahfuzmia1703@gmail.com

#include <stdio.h>

int main() {
    int R;

    double pi, volume;

    pi = 3.14159;
    scanf("%d", &R);

    volume =((4/3.0)*pi*R*R*R);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
