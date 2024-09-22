#include "stdio.h"

int order(int arr[], int len, int num);

int main(){

    //定义数组
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr) / sizeof(arr[0]);

    //定义一个变量表示要查找的数据
    int num = 5;

    //调用函数
    int index = order(arr, len, num);

    //输出索引
    printf("%d", index);

    return 0;
}

int order(int arr[], int len, int num){
    for (int i = 0; i < len; i++) {
        if(num == arr[i]){
            return i;
        }
    }
    return -1;
}