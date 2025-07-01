/*
编写一个程序，读取一个浮点数，首先以小数点计数法打印，然后以指数计数法打印用下面的格式输出:
The input is 21.3 or 2.1e+001（系统不同，指数计数法显示的位数可能不同）
*/
#include <stdio.h>

int main(void){

    double input;

    printf("Enter a float number:");
    scanf("%lf", &input);

    printf("The input is %.1f or %.1e\n", input, input);

    return 0;
}