/*
编写一个程序，创建一个整型变量toes，并将toes置为10，
程序中还要计算toes的两倍和toes的平方。
该程序应打印3个值，并分别描述以示区别。       
*/
#include <stdio.h>

int main(void){

    int toes;
    toes = 10;

    printf("The Varia toes = %d.\n", toes);
    printf("double toes = %d.\n", 2 * toes);
    printf("toes' square = %d.\n", toes * toes);

    return 0;
}