/*
编写一个程序，
提示用户输入以兆每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
程序中应计算文件下载时间。注意，这里的一个字节等于8位。使用 float 类型，并用/作为除号。
该程序要打印以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），显示小数点后两位数字。
例：At 18.12 megabits per second, a file of 2.20 megabytes download in 0.97 seconds.
*/
#include <stdio.h>

#define BYTE_PER_BITE 8

int main(void){

    float net_speed, file_size, time;

    printf("Please input the net speed(megabits_per_second):");
    scanf("%f", &net_speed);

    printf("Please input the file size(megabyte):");
    scanf("%f", &file_size);

    time = file_size * BYTE_PER_BITE / net_speed;
    printf("At %.2f megabits per second, "
           "a file of %.2f megabytes download in %.2f seconds.\n",
           net_speed, file_size, time);

    return 0;
}