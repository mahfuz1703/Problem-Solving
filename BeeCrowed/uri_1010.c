//Author: Mohammad Mahfuz
//Gmail: mahfuzmia1703@gmail.com

#include <stdio.h>

int main() {
    int a, b;
    double c, result;

    scanf("%d %d %lf", &a, &b, &c);
    result = b * c;

    scanf("%d %d %lf", &a, &b, &c);
    result += b * c;

    printf("VALOR A PAGAR: R$ %.2lf\n", result);
    return 0;
}
