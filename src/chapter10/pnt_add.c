//#include <stdio.h>
//
//#define SIZE 4
//
//int main(void) {
//
//    short dates[SIZE];
//    short * pti;
//    short index;
//    short bills[SIZE];
//    double * ptf;
//    pti = dates; // 把数组地址赋给指针
//    ptf = bills;
//
//    printf("%21s %11s\n", "short", "double");
//    for (index = 0; index < SIZE; index++)
//        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
//    return 0;
//}