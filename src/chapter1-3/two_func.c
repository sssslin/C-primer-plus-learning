#include <stdio.h>

void butler(void);/*ANSI/ISO C函数原型*/
int main(void) {

    // butler函数与C99标准库中的方法名重合
    // 如果一定要使用同样的名称,需要在main函数外先声明
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}
/*函数定义开始*/
void butler(void) {
    printf("You rang, sir?\n");
}

