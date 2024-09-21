#include <stdio.h>
int main(){

    int a[5] = {1,2,3,4,5};

    printf("%d\n",a[0]+a[2]+a[4]);

    int length = sizeof(a) / sizeof(a[0]) - 1;
    a[length] = 10;
    printf("%d",a[length]);

    return 0;
}