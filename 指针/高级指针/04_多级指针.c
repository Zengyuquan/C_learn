#include "stdio.h"

int  main()
{
    // 定义变量
    int a = 10;
    int b = 20;

    // 定义一级指针
    int* p = &a;

    // 定义二级指针
    int** pp = &p;

    // 作用一：利用二级指针修改一级指针的内存地址
    *pp = &b;

    // 作用二：利用二级指针获取变量中记录的数据

    // 打印输出
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", p);

    printf("%d\n", **pp);

    return 0;
}