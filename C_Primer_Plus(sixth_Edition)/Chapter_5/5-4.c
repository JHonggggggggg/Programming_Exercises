/*
编写一个程序，提示用户输入一个身高（单位：厘米），
并分别以厘米和英寸为单位显示该值，允许有小数部分。
程序应该能让用户重复输入身高，直到用户输入一个非正值。
*/
#include <stdio.h>

#define FEET_TO_CM 30.48
#define IN_TO_CM 2.54

int main(void){

    printf("CONVERT CM TO INCHES!\n");

    float height_cm, height_inch;
    int height_feet;    

    printf("Enter the height in centimeters:");
    scanf("%f", &height_cm);
    while(height_cm > 0 ) {
        height_feet = height_cm / FEET_TO_CM;
        height_inch = (height_cm - height_feet * FEET_TO_CM) / IN_TO_CM;
        printf("%.1f cm = %d feet , %.1f inches\n", height_cm, height_feet, height_inch);
        printf("Enter the height in centimeters( <=0 TO QUIT ):");
        scanf("%f", &height_cm);
    }
    printf("PROGRAM EXIT!\n");

    return 0;
}