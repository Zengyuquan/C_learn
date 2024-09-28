#include "stdio.h"
#include "string.h"

int main()
{

    char* str1 = "abc";     //底层会把字符串数组放到在只读常量区（只能读，不能修改    复用）
    char str2[100] = "abc";
    char str3[5] = {'q', 'w', 'e', 'r', '\0'};

    /*
    printf("----------strlen----------\n");
    // 细节1：strlen这个函数在统计长度的时候，是不计算结束标志的
    // 细节2：在Windows中，默认情况下，一个中文占两个字节

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    printf("%d\n", len1);
    printf("%d\n", len2);
    printf("%d\n", len3);

    printf("----------strcat----------\n");
    // 细节：把第二个字符串中全部的内容，拷贝到第一个字符串的末尾
    //      前提1：第一个字符串是可以被修改的
    //      前提2：第一个字符串中剩余的空间可以容纳拼接的字符串
    strcat(str2, str3);
    printf("%s\n", str2);
    printf("%s\n", str3);

    printf("----------strcpy----------\n");
    strcpy(str2, str3);
    // 细节：把第二个字符串中全部的内容，拷贝到第一个字符串里面原有的内容覆盖了
    //      前提1：第一个字符串是可以被修改的
    //      前提2：第一个字符串中剩余的空间可以容纳第二个字符串的完整内容
    printf("%s\n", str2);
    printf("%s\n", str3);


    printf("----------strcmp----------\n");
    // 细节：在比较的时候，要求顺序和内容完全一致，才叫做字符串一样
    // 完全一样:0
    // 只要有一个不一样:!0
    int res = strcmp(str1, str2);
    printf("%d\n", res);
    */

    printf("----------strlwr----------\n");
    strlwr(str2);
    printf("%s\n", str2);

    printf("----------strupr----------\n");
    strupr(str2);
    printf("%s\n", str2);

    return 0;
}