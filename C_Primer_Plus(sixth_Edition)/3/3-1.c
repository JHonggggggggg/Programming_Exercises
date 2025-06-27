/*通过试验观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){

    //整数上溢
    int max_int = INT_MAX;
    printf("Max int is: %d\n", max_int);
    printf("Max int + 1(OverFlow): %d\n", max_int + 1);

    //浮点数上溢
    float max_float = FLT_MAX;
    printf("Max float is: %f or %e\n", max_float, max_float);
    printf("Max float * 1.1(OverFlow): %f or %e\n", max_float * 1.1f, max_float * 1.1f);

    //浮点数下溢
    float min_float = FLT_MIN;
    printf("Min float is: %f or %e\n", min_float, min_float);
    printf("min_float / 1.0e20 (UnderFlow): %e\n", min_float / 1.0e20f);

    // 获取float类型的最小非零值(可能为次规范数)
    // 注意：标准C库没有直接提供这个宏，我们可以手动计算一个很小的值
    float tiny_float = 1.0e-45f;  // 比FLT_MIN小很多的值
    printf("非常小的float值: %e\n", tiny_float);

    return 0;
}