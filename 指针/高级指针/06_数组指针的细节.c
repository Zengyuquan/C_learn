#include "stdio.h"

int main()
{
    // 1.定义数组
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    // 2.sizeof 运算的时候，不会退化，arr还是整体
    printf("%zu\n", sizeof(arr));    // 40

    // 3.&arr获取地址的时候，不会退化，记录的内存地址第一个的首地址，也就是数组的首地址，步长：数据类型*数组的长度 40
    // arr参与计算的时候，会退化为第一个元素的指针，记录的内存地址是第一个元素的首地址，也是数组的首地址，步长：数据类型 int 4

    printf("%p\n", arr);
    printf("%p\n", &arr);

    printf("%p\n", arr + 1);    //4
    printf("%p\n", &arr + 1);   //40


    return 0;
}