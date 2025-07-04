/*
编写一个程序，提示用户输入天数，然后将其转换成周数和天数，
例如用户输入18，则转换成2周4天，以下面的格式现实结果。
18 days are 2 weeks, 4 days
*/
#include <stdio.h>

#define DAYS_PER_WEEK 7

int main(void){

    printf("CONVERT DAYS TO WEEKS!\n");

    int day, week, day_rest;

    printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
    scanf("%d", &day);
    while(day > 0){
        week = day / DAYS_PER_WEEK;
        day_rest = day % DAYS_PER_WEEK;
        printf("%d days are %d weeks, %d days\n", day, week, day_rest);

        printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
        scanf("%d", &day);
    }
    printf("PROGRAM EXIT!\n");

    return 0;
}