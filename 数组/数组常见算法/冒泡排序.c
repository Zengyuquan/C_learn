#include "stdio.h"

int main(){

    //定义数组
    int arr[] = {3,5,2,1,4};
    int len = sizeof(arr) / sizeof(arr[0]);

    //利用冒泡排序，将数组中的数据按照升序排序
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 -i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}