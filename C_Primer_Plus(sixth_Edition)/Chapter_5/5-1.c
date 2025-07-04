/*
编写一个程序，把分钟表示的时间转换成为用小时和分钟表示的时间。
使用#define或者const创建一个表示60的符号常量或者const常量。
通过while循环让用户重复输入值，直到用户输入小于或者等于0的值才停止循环。
*/
#include <stdio.h>

#define MIN_PER_HOUR 60

int main(void){

    printf("CONVERT MINUTES TO HOURS!\n");

    int min, hour;

    printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
    scanf("%d", &min);
    while(min > 0){
        hour = min / MIN_PER_HOUR;
        min = min % MIN_PER_HOUR;
        printf("CONVERT TO %d HOUR AND %d MINUTES\n", hour, min);

        printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
        scanf("%d", &min);
    }
    printf("PROGRAM EXIT!\n");

    return 0;
}