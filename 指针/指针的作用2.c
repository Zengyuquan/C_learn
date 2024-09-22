#include <stdio.h>

void getMaxAndMin(int arr[], int len, int* max, int* min);

int main(){

    //定义数组
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr) / sizeof(arr[0]);

    //调用getMaxAndMin()求最大值和最小值
    int max = arr[0];
    int min = arr[0];

    getMaxAndMin(arr, len, &max, &min);

    printf("数组最大值为：%d\n", max);
    printf("数组最小值为：%d\n", min);

    return 0;
}

void getMaxAndMin(int arr[], int len, int* max, int* min)
{
    *max = arr[0];

    for (int i = 0; i < len; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }

    *min = arr[0];

    for (int i = 0; i < len; i++)
    {
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}