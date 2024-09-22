#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // 1、定义数组
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 2、生成10个1~100之间的随机数存入数组
    // 设置种子
    srand(time(NULL));
    // 生成随机数
    for (int i = 0; i < len; i++) {
        int num = rand() % 100 + 1;
        arr[i] = num;
    }

    //累加思想求和
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    printf("%d",sum);


    return 0;
}