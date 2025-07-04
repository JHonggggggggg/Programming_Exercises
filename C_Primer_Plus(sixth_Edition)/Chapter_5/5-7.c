/*
编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
自己设计一个函数计算并打印立方值。main函数要把用户输入的值传递给改函数。
*/
#include <stdio.h>

double cubic(double n);

int main(void){

    double input, result;

    printf("Eneter the double datum to calc cubic:");
    scanf("%lf", &input);
    result = cubic(input);
    printf("The %.0lf's cubic is %.0lf !\n", input, result);
    printf("PROGRAM EXIT!\n");

    return 0;
}

double cubic(double n){
    double result;
    result = n * n * n;
    return result;
}