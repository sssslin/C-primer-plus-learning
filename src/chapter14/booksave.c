//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 100 /*书籍的最大数量*/
//
//char *s_gets(char *st, int n);
//
//struct book { /*建立book模板*/
//
//    char title[MAXTITL];
//    char author[MAXAUTL];
//    float value;
//};
//
//int main(void)
//{
//    struct book library[MAXBKS];/*结构数组*/
//    int count = 0;
//    int index, filecount;
//    FILE * pbooks;
//    int size = sizeof(struct book);
//
//    if((pbooks = fopen("book.dat", "a+b")) == NULL)
//    {
//        fputs("Can't open book.dat file\n", stderr);
//        exit(1);
//    }
//
//    rewind(pbooks); /*定位到文件开始*/
//    while (count < MAXBKS && fread(&library[count],size, 1,pbooks) ==1) {
//        if(count == 0)
//            puts("Current contents of book.dat:");
//        printf("%s by %s: $%.2f\n", library[count].title,
//                library[count].author, library[count].value);
//        count++;
//    }
//
//    filecount = count;
//    if (count == MAXBKS)
//    {
//        fputs("The book.dat file is full.", stderr);
//        exit(2);
//    }
//
//    puts("Please add new book titles.");
//    printf("Press [enter] at the start of line to stop.\n");
//    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
//           && library[count].title[0] != '\0') {
//        puts("Now enter the author.\n");
//        s_gets(library[count].author, MAXAUTL);
//        puts("Now enter the value.\n");
//        scanf("%f", &library[count++].value);
//        while (getchar() != '\n')
//            continue; /*清理输入行*/
//        if (count < MAXBKS)
//            printf("Enter the next title.\n");
//    }
//
//    if (count > 0) {
//        printf("Here is the list of your books:\n");
//        for (index = 0; index < count; index++)
//            printf("%s by %s: $%.2f\n", library[index].title,
//                   library[index].author, library[index].value);
//        fwrite(&library[filecount], size, count - filecount, pbooks);
//    }
//
//    else
//        printf("No books? Too bad.\n");
//
//        puts("Bye.\n");
//        fclose(pbooks);
//
//    return 0;
//}
//char * s_gets(char *st, int n) {
//    char * ret_val;
//    char * find;
//
//    ret_val = fgets(st, n, stdin);
//    if (ret_val) {
//        find = strchr(st, '\n'); // 查找换行符
//        if (find) // 如果地址不是null,
//            *find = '\0'; // 在此处放置一个空字符
//        else
//            while (getchar() != '\n')
//                continue; // 处理输入行中剩余的字符
//    }
//    return ret_val;
//}