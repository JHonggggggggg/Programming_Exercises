/*
在美国的测量体系中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺，
编写一个程序，提示用户输入杯数，并且以品脱、盎司、汤勺、茶勺为单位显示等价容量。
思考对于该程序，为何使用浮点类型比整数类型更合适。
*/
#include <stdio.h>

#define PINT_TO_CUP 2.0f
#define CUP_TO_OUNCE 8.0f
#define OUNCE_TO_SPOON 2.0f
#define SPOON_TO_TEASPOON 3.0f

int main(void){

    float cup, pint, ounce, tablespoon, tea_spoon;
    printf("Enter how many cup:__\b\b");
    scanf("%f", &cup);

    pint = cup / PINT_TO_CUP;
    ounce = cup * CUP_TO_OUNCE;
    tablespoon = ounce * OUNCE_TO_SPOON;
    tea_spoon = tablespoon * SPOON_TO_TEASPOON;

    printf("%.1f cup equals %.1f pint, %.1f ounce, %.1f spoon, %.1f tean_spoon",
            cup, pint, ounce, tablespoon, tea_spoon);

    return 0;
}