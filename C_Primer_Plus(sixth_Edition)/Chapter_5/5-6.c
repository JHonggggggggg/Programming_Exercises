/*
修改习题五的程序，
使之能够计算整数的平方和（可以认为第一天赚$1、第二天赚$4、第三天赚$9，以此类推），
C没有平方函数，但是可以用n*n来表示n的平方。
*/
#include <stdio.h>

int main(void){

    int day;
    int i = 0;
    int total = 0;

    printf("Enter the number of days you work:");
    scanf("%d", &day);

    while(i++ < day)  total += i * i;
    
    printf("You earned $ %d total!\n", total);
    printf("PROGRAM EXIT!\n");

    return 0;
}