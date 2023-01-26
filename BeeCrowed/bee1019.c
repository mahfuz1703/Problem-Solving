//Author: Mphammad Mahfuz
//Gmail: mahfuzmia1703@gmail.com

#include <stdio.h>

int main(){
    int total_second, hours, minutes, seconds;
    scanf("%d", &total_second);

    hours = total_second / (60 * 60);
    minutes = (total_second % 3600) / 60;
    seconds = (total_second % 3600) % 60;
    

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;

}