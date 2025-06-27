/*编写一个程序，把你的年龄转换成天数，这里不用考虑闰年的问题。*/
#include <stdio.h>

#define YEARDAYS 365

int main(void){

    int age, live_days;
    age = 21;
    live_days = YEARDAYS * age;

    printf("You age is %d, and It_is %d days.\n", age, live_days);

    return 0;
}