/*
假设第一天赚$1、第二天赚$2、第三天赚$3，
以此类推。设计程序，用户输入工作的天数，计算对应的工资总和。
*/
#include <stdio.h>

int main(void){

    int day;
    int i = 0;
    int total = 0;

    printf("Enter the number of days you work:");
    scanf("%d", &day);

    while(i++ < day)  total += i;
    
    printf("You earned $ %d total!\n", total);
    printf("PROGRAM EXIT!\n");

    return 0;
}