/*
编写一个程序，要求用户输入一个华氏温度。
程序应读取double类型的值作为温度值，
并把该值作为参数传递给一个用户自定义的函数Temperatures()。
该函数计算摄氏温度和开氏温度，并以小数点后两位数字的精度显示3种温度。
要使用不同的温标来表示这三个温度值。

下面是华氏温度转换摄氏温度的公式：
摄氏温度 = 5.0/9.0*(华氏温度 - 32)
开氏温标常用于科学研究，0表示绝对零度代表最低的温度，下面是摄氏温度转开氏温度的公式：
开氏温度 = 摄氏温度 + 273.16

Temperatures()函数中用const创建温度转换的变量。
在main()函数中使用一个循环让用户反复输入温度，当用户输入q或者其他非数字时，循环结束。
scanf()函数返回值读取数据的数量，所以如果读取数字则返回1，
如果读取q则不返回1。可以使用 == 运算符将scanf()的返回值和1做比较，测试两值是否相等。
*/
#include <stdio.h>

#define CELSIUS_TO_KELVIN 273.16  //开氏温度 = 摄氏温度 + 273.16

double Temperatures(double t);

int main(void){

    printf("This program convert fahrenheit to celsius and kelvin\n");

    double fahrenheit, celsius, kelvin;

    printf("Enter a fahrenheit to start : ");
    while(scanf("%lf", &fahrenheit) == 1){
        celsius = 5.0 / 9.0 * (fahrenheit - 32);  //摄氏温度 = 5.0/9.0*(华氏温度 - 32)
        kelvin = celsius + CELSIUS_TO_KELVIN;
        printf("%.2lf fahrenheit, equal %.2lf celsius, and %.2lf kelvin\n", fahrenheit, celsius, kelvin);

        printf("Enter next fahrenheit! ( q to quit ): ");
    }
    printf("Done!\n");

    return 0;
}