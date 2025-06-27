/*
编写一个程序，调用一次printf()函数。把你的姓和名打印在一行。
再调用一次printf()函数，把你的名和姓分别打印两行。
然后，再调用两次printf()函数。那你的名和姓打印在一行。
*/
#include <stdio.h>

#define FNAME "Eugene"
#define NAME "H.Krab$"

int main(void){

    printf("%s %s\n\n",FNAME,NAME);

    printf("%s\n%s\n\n",FNAME,NAME);

    printf("%s ",FNAME);
    printf("%s\n",NAME);
    
    return 0;
}