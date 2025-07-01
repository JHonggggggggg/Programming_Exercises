/*
编写一个程序，提示用户输入名字，并执行以下操作：
a.打印名字，包括双引号
b.在宽度为20的字段右端打印名字，并包括双引号
c.在宽度为20的字段左端打印名字，并包括双引号
d.在比姓名宽度宽3的字段中打印名字
*/
#include <stdio.h>
#include <string.h>

int main(void){

    char name[40];

    printf("Please input your name:");
    scanf("%s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", (int)(strlen(name)+3), name); //strlen()返回值为size_z
    /*
    最后一个输出的答案解法：
        width = printf("\"%s\".\n",name);
        width -= 4;
        printf("\"%*s\".\n",(width+3),name);
    */

    return 0;
}
