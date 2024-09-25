#include "stdio.h"

void swap(void* p1, void* p2, int len);

int main()
{

    // 1.定义两个变量
    int a = 10;
    short b = 20;

    // 2.定义两个指针
    int* p1 = &a;
    short * p2 = &b;

    // 3.输出打印
    printf("%d\n", *p1);
    printf("%d\n", *p2);

    // 不同类型指针之间，是不能相互赋值的
//    char* p3 = p1;
    // void类型的指针没有任何类型，好处是可以接受任何类型的内存地址
    void* p3 = p1;
    void* p4 = p2;
    // 缺点是：void类型的指针，无法获取变量里面的数据，也不能进行加减的计算
//    printf("%d\n", *p3);
//    printf("%d\n", p3 + 1)

    // 调用函数交换数据
    int c = 100;
    int d = 200;

    printf("前:c = %d, d = %d\n", c, d);

    swap(&c, &d, 4);

    printf("后:c = %d, d = %d\n", c, d);

    return 0;
}

void swap(void* p1, void* p2, int len)
{
    // 把void类型的指针，转成char类型的指针
    char* pc1 = p1;
    char* pc2 = p2;

    char temp = 0;
    // 以字节为单位，一字节一字节的进行交换
    for (int i = 0; i < len; i++) {
        temp = *pc1;
        *pc1 = *pc2;
        *pc2 = temp;

        pc1++;
        pc2++;
    }
}