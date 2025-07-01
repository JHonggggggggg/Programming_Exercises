/*
编写一个程序，
将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为 1.0/3.0。
分别计算两次计算的结果各三次，
一次显示小数点后面的6位数字，一次显示小数点后面的 12 位数字，一次显示小数点后面的 16 位数字。
程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致么？
*/
#include <stdio.h>
#include <float.h>

int main(void){

    float f = 1.0/3.0;
    double d = 1.0/3.0;

    printf("6  digits: float:%-20.6f, double:%-20.6lf\n", f, d);
    printf("12 digits: float:%-20.12f, double:%-20.12lf\n", f, d);
    printf("16 digits: float:%-20.16f, double:%-20.16lf\n", f, d);

    //FLT_DIG和DBL_DIG是<float.h>中定义的宏，它们表示float和double类型的十进制精度位数(一般都是整数)
    printf("%%d :FLT_DIG:%-5.d, DBL_DIG:%-5.d\n", FLT_DIG, DBL_DIG);
    printf("%%f :FLT_DIG:%-5.f, DBL_DIG:%-5.f\n", FLT_DIG, DBL_DIG);

    return 0;
}