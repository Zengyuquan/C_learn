#include "stdio.h"

int main()
{
    // 1.打开文件：fopen
    FILE*  file = fopen("a.txt","r");

    // 2.读取数据   一次一个字节，
    //fegtc细节：   一次一个字符     如果读到了，就返回字符，都不带哦返回-1
    int c;
    while((c = fgetc(file)) != -1)
    {
        printf("%c", c);
    }

    // 3.关闭文件
    fclose(file);
}