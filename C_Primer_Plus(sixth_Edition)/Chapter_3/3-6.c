/*
一个水分子的质量约为3.0e-32克。一夸脱的水大约是950克。
编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/
#include <stdio.h>

#define WATER_MOLECULE_MASS 3e-32L //使用long double提高精度

int main(void){

    double water_molecule_quantity, quart_quantity, all_mass;
    printf("Enter how many quart:__\b\b");
    scanf("%lf", &quart_quantity);

    all_mass = quart_quantity * 950.0;
    water_molecule_quantity = all_mass / WATER_MOLECULE_MASS;
    printf("There are %e molecules.\n", water_molecule_quantity);

    return 0;
}