//#include <stdio.h>
//
//#define STLEN 10
//int main(void) {
//
//    char words[STLEN];
//    int i;
//
//    puts("Enter strings (empty line to quit):");
//    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
//        i = 0;
//        while (words[i] != '\n' && words[i] != '\0')
//            i++;
//        if (words[i] == '\n')
//            words[i] = '\0';
//        else // 如果word[i] == '\0'则执行这部分代码
//        while (getchar() != '\n')
//            continue;
//        puts(words);
//    }
//
//    puts("done");
//
//    return 0;
//}
//// s_gets()函数
//char * s_gets(char * st, int n) {
//
//    char * ret_val;
//    int i = 0;
//
//    ret_val = fgets(st, n, stdin);
//    if (ret_val) // 即, ret_val != NUlL
//    {
//        while (st[i] != '\n' && st[i] != '\0')
//            i++;
//        if (st[i] == '\n')
//            st[i] ='\0';
//        else
//            while (getchar() != '\n')
//                continue;
//    }
//
//    return ret_val;
//}
