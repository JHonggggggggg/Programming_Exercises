/*
编写一个程序，读取一个浮点数，先打印成小数点形式，再打印指数形式，
然后，如果系统支持，再打印成p记数法（即十六进制记数法）。
按以下格式输出（实际显示的指数位数因系统而异）：
Enter a floating-point value:64.25
fixed-point notation: 64.250000
exponential notation: 6.425000e+01
p notation: 0x1.01p+6
*/
#include <stdio.h>

int main(void){

    float input;
    printf("Enter a floating-point value:________\b\b\b\b\b\b\b\b");
    scanf("%f", &input);
    printf("exponential notation: %e\n", input);
    printf("p notation: %a\n", input);

    return 0;
}