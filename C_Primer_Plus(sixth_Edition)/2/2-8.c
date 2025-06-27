/*
在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名为one_three()函数，
该函数在一行打印“one”，再调用第二个函数two()，然后在另一行打印单词“three”。
two()函数，在一行显示单词“two”。main()函数在调用one_three()函数前要打印短语“Staring now：” ，
并在调用完毕后显示短语“Done!” 。因此，该程序的输出应如下所示：
Starting now:
one
two
three
Done!                  
*/
#include <stdio.h>

void one_three(void);
void two(void);

int main(void){

    printf("Starting now:\n");

    one_three();
    
    printf("Done!\n");

    return 0;
}


void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}

void two(void){
    printf("two\n");
}