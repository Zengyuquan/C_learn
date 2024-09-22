#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){

    //定义数组
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);

    //生成随机数
    srand(time(NULL));

    //打乱数组
    for (int i = 0; i < len; i++) {
        int index = rand() % len;
         int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
    }

    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}