/*编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印。*/
#include <stdio.h>

int main(void){

    char fname[20], lname[20];

    printf("Please input your first name:");
    scanf("%s", fname);

    printf("Please input your last name:");
    scanf("%s", lname);

    printf("Hello, %s, %s.\n", fname, lname);

    return 0;
}