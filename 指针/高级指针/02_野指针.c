#include "stdio.h"

int* method();

int main()
{
    // 正常指针
    int a = 10;
    int* p1 = &a;
    printf("%p\n", p1);
    printf("%d\n", *p1);

    // 野指针
    int* p2 = p1 + 10;
    printf("%p\n", p2);
    printf("%d\n", *p2);

    // 悬空指针:指针指向的内存地址已分配，但是被释放了
    int* p3 = method();

    printf("拖点时间\n");
    printf("%p\n", p3);
    printf("%d\n", *p3);

    return 0;
}

int* method()
{
    int num = 10;
    int* p = &num;
    return p;
}