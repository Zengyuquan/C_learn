#include "stdio.h"

int main()
{
   // 1.打开文件
   FILE* file = fopen("C:\\Users\\Zengyuquan\\Desktop\\abc.txt","a");

   // 2.写出数据
   //fputc 一次写一个字符，返回写出的字符
   int c = fputc(97, file);
   printf("%d\n", c);

   // fputs 一次写一个字符，写出成功返回非负数，一般忽略返回值
   int n = fputs("你好你好", file);
    printf("%d\n", n);

    // fwrite 一次都多个，返回写出的字节个数
    char arr[] = {97, 98, 99, 100, 101};
    int n2 = fwrite(arr, 1, 5, file);
    printf("%d\n", n2);

    // 3.关闭文件
    fclose(file);

    return 0;
}