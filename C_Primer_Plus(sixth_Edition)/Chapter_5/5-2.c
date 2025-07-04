/*
编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数
（例如，用户输入5，则打印5～15所有整数包括5和15）。
要求打印的各值之间用一个空格、制表格或换行符分开。
*/
#include <stdio.h>

#define OUTPUT_SIZE 10

int main(void){

    int input, max;
    printf("Please enter a number:");
    scanf("%d", &input);
    max = max = input + OUTPUT_SIZE;

    while(input <= max){
        printf("%4d", input++);
    }

    return 0;
}