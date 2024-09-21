#include<stdio.h>

int arr_max();

int main()
{

    int arr[] = {33,5,22,44,55};
    int len = sizeof(arr) / sizeof(arr[0]);

    arr_max(arr,len);

    return 0;
}

int arr_max(int arr[],int len){
    //max不能赋值为0；假设数组中的元素为负数，会出现错误
    int max = arr[0];
    for (int i = 0; i < len; i++) {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("max=%d",num);
}