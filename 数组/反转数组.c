#include "stdio.h"

void printArr();

int main(){

    // 定义数组
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 键盘录入数据
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用函数
    printArr(arr, len);

    int i = 0;
    int j = len -1;
    while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    printArr(arr, len);


    return 0;
}

void printArr(int arr[], int len){
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}