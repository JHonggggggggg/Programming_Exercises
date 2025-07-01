/*
编写一个程序，生成以下输出：
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!      
*/
#include <stdio.h>

void jolly(void);
void deny(void);

int main(void){

    jolly();
    jolly();
    jolly();
    deny();
    
    return 0;
}

void jolly(void){
    printf("For he's a jolly good fellow!\n");
}

void deny(void){
    printf("Which nobody can deny!\n");
}