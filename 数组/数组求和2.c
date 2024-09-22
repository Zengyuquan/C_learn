#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(int arr[],int len,int num);

int main(){

    // 1、定义数组
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 2、生成10个1~100之间的随机数存入数组
    // 设置种子
    srand(time(NULL));
    // 生成随机数
    for (int i = 0; i < len;) {
        int num = rand() % 100 + 1;
        int flag = contains(arr,len,num);
        if(!flag){
            arr[i] = num;
            i++;
        }
    }

    //3、累加思想求和
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
        printf("%d\t",arr[i]);
    }

    // 4.求平均数
    int avg = sum / len;

    // 5.统计有多少个数字比平均数小
    int count = 0;
    for (int i = 0; i < len; i++) {
        if(arr[i] < avg){
            printf("\n比平均数小的数：%d\t",arr[i]);
            count++;
        }
    }

    // 6.输出
    printf("\navg=%d\n",avg);
    printf("count=%d\n",count);

    return 0;
}

int contains(int arr[],int len,int num){
    for (int i = 0; i < len; i++) {
        if (arr[i] == num){
            return 1;
        }
    }
    return 0;
};