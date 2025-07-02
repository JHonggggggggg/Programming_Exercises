/*
一年大约有3.156e7秒。编写一个程序，
提示用户输入年龄，然后显示该年龄对应的秒数。
注意选择恰当的数据类型。
*/
#include <stdio.h>

#define SECONDS_ONEYEAR 3.156e7

int main(void){

    float age, age_seconds;

    printf("Enter how many years old you are:__\b\b");
    scanf("%f", &age);

    age_seconds = age * SECONDS_ONEYEAR;
    printf("You are: %.1f years old.\n", age);
    printf("And you are %e seconds old, too.", age_seconds);

    return 0;
}