//#include <stdio.h>
//
//// ANSI函数原型声明
//void pound(int n);
//
//int main (void) {
//
//    int times = 5;
//    char ch = '!'; // ASCII码是33
//    float f = 6.0f;
//
//    // int类型的参数
//    pound(times);
//    // 和pound((int)ch);相同
//    pound(ch);
//    // 和pound((int)f);相同
//    pound(f);
//
//    return 0;
//}
//// ANSI风格函数头
//void pound(int n) {
//    // 表明该函数接受一个int类型的参数
//    while (n-- >0)
//        printf("#");
//    printf("\n");
//}
