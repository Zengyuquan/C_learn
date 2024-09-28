#include "stdio.h"

int main()
{
    //每次读取一行，以换行符为准
    //如果读不到了，返回null

    // 1.打开文件
    FILE* file = fopen("C:\\Users\\Zengyuquan\\Desktop\\a.txt","r");

    // 2.读取数据
    char arr[1024];

    char* str;

    while((fgets(arr, 1024, file)) != NULL)
    {
        printf("%s\n", str);

    }

    // 3.关闭文件
    fclose(file);

    return 0;
}