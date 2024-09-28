#include "stdio.h"

int main()
{
    // 1.打开文件：fopen
    FILE* file =  fopen("C:\\Users\\Zengyuquan\\Desktop\\a.txt","r");

    // 2.读取数据
    // 英文的abc：占用1个字节
    // 中文：Windows64位当中，默认2个字节
    // fread细节：
    //      在读取的时候，每次尽可能会把数组给装满，返回当前读取到的有效字节个数
    //      数组长度：30
    //      第一次：读取到前面30个字节，把数组给装满，函数返回30
    //      第二次：读取到后面30个字节，把数组给装满，函数返回30
    //      第三次：读取到后面30个字节，把数组给装满，函数返回30
    //      第四次：读取到余剩的10个字节，会把数据放在数组中，函数返回10
    //      第五次：没有数据可以被读取了，函数返回0

    char arr[1024];
    int n;

    while((n = fread(arr, 1, 1024, file)) != 0)
    {
        for (int i = 0; i < n; i++) {
            printf("%c", arr[i]);
        }
    }


    fclose(file);

    return 0;
}