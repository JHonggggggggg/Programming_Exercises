/*
许多研究表明，微笑益处多多。
编写一个程序，生成以下格式输出：
Smile!Smile!Smile!
Smile!Smile!
Smile!
*/
#include <stdio.h>

void smiles(void);

int main(void){

    smiles();
    smiles();
    smiles();
    printf("\n");

    smiles();
    smiles();
    printf("\n");

    smiles();
    printf("\n");

    return 0;
}

void smiles(void){
    printf("Smile!");
}