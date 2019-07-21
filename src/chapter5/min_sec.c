//#include <stdio.h>
//
//#define SEC_PER_MIN 60
//
//int main (void) {
//
//    int sec, min, left;
//
//    printf("Cover seconds to minutes and seconds!\n");
//    printf("Enter the number of seconds (<= to quit):\n");
//    // 读取秒数
//    scanf("%d", &sec);
//
//    while (sec > 0) {
//        //  截断分钟数
//        min  = sec / SEC_PER_MIN;
//        // 剩下的秒数
//        left = sec % SEC_PER_MIN;
//        printf("%d seconds is %d minutes, %d seconds.\n",
//                sec, min, left);
//        printf("Enter next value (<= to quit):\n");
//        scanf("%d", &sec);
//    }
//
//    printf("Done!\n");
//
//    return 0;
//}