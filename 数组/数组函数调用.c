#include<stdio.h>

void printArr();

int main(){

    //数组作为函数的参数，实际上传递是数组的首地址，如果要在函数中对数组进行遍历的话，一定要记得把数组的长度一起传递过去
    //定义处：arr表示的就是完整的数组
    //函数中的arr：只是一个变量，用来记录数组的首地址

    //1.定义数组
    int arr[] = {1,2,3,4,5};
    printf("%zu\n",sizeof(arr));        //20

    int len = sizeof(arr) / sizeof(arr[0]);

    //2.调用函数遍历数组
    printArr(arr,len);


    return 0;
}

void printArr(int arr[],int len){
    printf("%zu\n",sizeof(arr));        //8，是指针的大小
    for (int i = 0; i < len; i++) {
        printf("%d\n",arr[i]);
    }
}