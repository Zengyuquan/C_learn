#include "stdio.h"

int main(){

    //定义数组
    int arr[] = {3,5,2,1,4};
    int len = sizeof(arr) / sizeof(arr[0]);

    //利用选择排序，将数组中的数据按照升序排序
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //输出
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}