#include<stdio.h>
int main(){

    int a[] = {1,2,3,4,5};

    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length - 1; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}
