/*
编写一个程序，生成以下输出：
Brazil, Russia, India, China
India, China,
Brazil, Russia          
*/
#include <stdio.h>

void br(void);
void ic(void);

int main(void){

    br();
    printf(",");
    ic();
    printf("\n");

    ic();
    printf(", \n");

    br();
    printf("\n");

    return 0;
}

void br(void){
    printf("Brazil, Russia");
}

void ic(void){
    printf("India, China");
}