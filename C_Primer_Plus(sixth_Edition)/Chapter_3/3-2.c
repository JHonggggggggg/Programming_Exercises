/*编写一个程序，要求提示输入一个ASCII码值,然后打印该输入的字符。*/
#include <stdio.h>

int main(void){

    int codeValue;
    printf("Enter a value of char int ASCII:___\b\b\b");
    scanf("%d", &codeValue);
    printf("You input value is %d, and char is %c\n", codeValue, codeValue);

    return 0;
}