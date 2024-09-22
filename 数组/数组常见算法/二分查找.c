#include "stdio.h"

int binarySearch(int arr[], int len, int num);

int main(){

    //定义数组
    int arr[] = {7, 23, 79, 81, 127, 131, 147};
    int len = sizeof(arr) / sizeof(arr[0]);

    //定义变量表示要查找的数据
    int num = 131;

    //调用函数
    int index = binarySearch(arr, len, num);

    //输出
    printf("%d\n", index);

    return 0;
}

int binarySearch(int arr[], int len, int num){
    //1.确定查找范围
    int min = 0;
    int max = len - 1;

    //2.利用循环不断进行查找
    while(min <= max){
        //确定中间位置
        int mid = (min + max) / 2;


        //比较
        if(arr[mid] < num)
        {
            min = mid + 1;
        }
        else if(arr[mid] > num){
            max = mid - 1;
        }
        else{
            return mid;
        }
    }

    //3.如果min > max ，表示数据不存在，返回 -1
    return -1;
}