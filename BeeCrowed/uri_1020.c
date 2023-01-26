//Author: Mohammad Mahfuz
//Gmail: mahfuzmia1703@gmail.com

#include <stdio.h>

int main() {
    int n, years, months, days;

    scanf("%d", &n);
    years = n/365;

    months = (n - 365) / 30;

    days = n - 365 - 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}
