#include<stdio.h>
int main(){

    int a[] = {1,2,3,4,5};

    // 获取数组的内存地址
    printf("%p\n",&a);
    printf("%p\n",&a[1]);
    printf("%p\n",&a[2]);
    printf("%p\n",&a[3]);
    printf("%p\n",&a[4]);

    return 0;
}