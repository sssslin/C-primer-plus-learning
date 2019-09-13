//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//    int value1 = 44;
//    int arr[SIZE];
//    int value2 = 88;
//    int i;
//    printf("value1 = %d, value2 = %d\n", value1, value2);
//    for (i = -1; i <= SIZE; i++)
//        arr[i] = 2 * i + 1;
//
//    for (i = -1; i < 7; i++)
//        printf("%2d %d\n", i , arr[i]);
//    // 在C Primer Plus书中的例子,arr[-1]与value2的内存地址相同,arr[4]与value1的内存地址相同
//    // 但是在我当前的电脑编译器中,结果是arr[-1]与value2的内存地址相同arr[6]与value1的内存地址相同
//    // 这和编译器有关,不同编译器的结果不一样
//    // 而且value1和value2的值却意外的被改变了,都是由于数组越界造成的异常
//    printf("value1 = %d, value2 = %d\n", value1, value2);
//    printf("address of arr[-1]: %p\n", &arr[-1]);
//    printf("address of arr[6]: %p\n", &arr[6]);
//    printf("address of value1: %p\n", &value1);
//    printf("address of value2: %p\n", &value2);
//
//    return 0;
//}