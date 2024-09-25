#include "stdio.h"

int main()
{

    // 定义数组
    int arr[] = {10,20,30,40,50};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 获取数组的指针
    // 实际上获取的：数组的首地址
    int* p1 = arr;
    int* p2 = &arr[0];

    printf("%d\n", *p1);
    printf("%d\n", *(p1 + 1));
    printf("%d\n", *(p1 + 2));

    for(int i = 0; i < len; i++)
    {
        printf("%d ", *p1++);
    }

    return 0;
}