/*
编写一个程序，提示用户输入身高（单位英寸）和姓名，
然后以下面的格式显示用户刚输入的信息：Dabney, you are 6.208 feet tall.
*/
#include <stdio.h>

#define INCH_TO_FEET 12

int main(void){

    char name[40];
    float height_inch, height_feet;

    printf("Enter your name:");
    scanf("%s", name);

    printf("Hi %s, how tall you are( inch ):", name);
    scanf("%f", &height_inch);
    height_feet = height_inch / INCH_TO_FEET;

    printf("%s, you are %.3f feet tall\n", name, height_feet);

    return 0;
}