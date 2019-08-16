#include <stdio.h>
#define COVERAGE 350 // 每罐油漆可刷的面积(单位:平方英尺)
/**
 * 余数的定义：当被除数不够整除时余下的数。
 *当都是正整数时:
 *除法实际可转化为减数，不够减时剩下的就是余数
 */
int main(void) {

    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) % COVERAGE  == 1) {

                cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE  == 0) ? 0 : 1);
        printf("You need %d %s of paint.\n", cans,
                cans == 1 ? "Can" : "Cans");
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}