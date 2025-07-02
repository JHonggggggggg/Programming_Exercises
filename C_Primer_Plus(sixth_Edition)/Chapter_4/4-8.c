/*
编写一个程序，一是用户输入旅行里程和消耗的汽油量。
然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后的一位数字。
接下来，使用1加仑大约3.785升，1英里大约1.609千米，
把单位是英里/加仑的值转换为升/百公里（欧洲通用的燃料消耗表示法），
并显示结果，显示小数点后面的1位数字。
注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），
而欧洲采用单位距离消耗的燃料测量方案（值越低越好）。
使用#define创建符号常量或者使用const限定符创建变量来表示两个转换系数。
*/
#include <stdio.h>

#define MILE_TO_KM 1.609
#define GALLON_TO_LITER 3.785

int main(void){

    float mile, kilometer, gallon, liter;
    float oilwear_USA, oilwear_E;

    printf("Pleast input the range you traveled(in mile):");
    scanf("%f", &mile);

    printf("Please input the oil you spend(in gallon):");
    scanf("%f", &gallon);

    kilometer = mile * MILE_TO_KM;
    liter = gallon * GALLON_TO_LITER;

    oilwear_USA = mile / gallon;
    oilwear_E = liter / kilometer * 100.0;

    printf("In USA, your oil wear is %.1f M/G\n", oilwear_USA);
    printf("In Europe, your oil wear is %.1fL/100KM\n", oilwear_E);

    return 0;
}