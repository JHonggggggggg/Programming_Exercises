/*
1 英寸相当于2.54厘米，编写一个程序，
提示用户输入身高（英寸），然后以厘米为单位显示身高。
*/
#include <stdio.h>

#define INCH_TO_CM 2.54f

int main(void){

    float inch_height, cm_height;
    printf("Enter the inch of your height:__\b\b");
    scanf("%f", &inch_height);

    cm_height = inch_height * INCH_TO_CM;
    printf("Hi, your are %.2f inch, or %.2f cm height.\n", inch_height, cm_height);

    return 0;
}