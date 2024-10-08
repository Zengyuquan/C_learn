#include "stdio.h"

int main()
{
    // 1.定义二维一个数组
    int arr[3][5] =
            {
                    {1,2,3,4,5},
                    {11,22,33,44,55},
                    {111,222,333,444,555},
            };

    // 2.利用指针遍历二维数组
    // 获取二维数组的指针

    // 数组指针的数据类型：要跟数组内部元素的类型保持一致
    // 二维数组里面存储的是一维数组int[5]
    // int[5] *p = int (*p)[5]
    int (*p)[5] = arr;

    for(int i = 0; i < 3; i++)
    {
        // 遍历一维数组
        for (int j = 0; j < 5; j++) {
            printf("%d ", *(*p + j));
        }
        // 换行
        printf("\n");
        // 移动二维数组的指针，继续遍历下一个一维数组
        p++;
    }


    return 0;
}