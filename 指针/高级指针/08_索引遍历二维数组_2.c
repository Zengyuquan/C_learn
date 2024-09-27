#include "stdio.h"

int main()
{
    // 1.定义三个一维数组
    int arr1[3] = {1,2,3};
    int arr2[5] = {1,2,3,4,5};
    int arr3[9] = {1,2,3,4,5,6,7,8,9};

    // 预先计算每一个数组的真实长度
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int len3 = sizeof(arr3) / sizeof(arr3[0]);

    // 再定义一个数组，装所有数组的长度
    int lenArr[3] = {len1, len2, len3};

    // 2.把三个一维数组放入到二维数组当中
    // 数组的数据类型，跟内部储存的元素保持一致
    // arr1:使用数组进行指针计算的时候，退化为指向第一个元素的指针，此时不再表示数组的整体了
    // 指针 --- 内存地址 64位win 8个字节
    int* arr[3] = {arr1, arr2, arr3};

    // 3.利用索引遍历arr
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < lenArr[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}