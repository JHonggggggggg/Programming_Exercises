/*
编写一个程序，先提示用户输入名，然后提示用户输入姓，
在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数字，
字母数字要与相应的名和姓结尾对齐，如下所示：
Melissa Honeybee
      7        8
*/
#include <stdio.h>

int main(void){

    char fname[20], lname[20];
    int width_fname, width_lname;

    printf("Please input your first name:");
    scanf("%s", fname);

    printf("Please input your last name:");
    scanf("%s", lname);

    width_fname = printf("%s", fname);
    printf(" ");
    width_lname = printf("%s", lname);
    printf("\n");

    printf("%*d%*d\n", width_fname, width_fname, width_lname + 1, width_lname);

    return 0;
}