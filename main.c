#include <stdio.h>

int main() {

    printf("输入一个3<=n<10的整数\n");
    int n = 0;
    scanf("%d", &n);

    int numArr[] = {0};
    printf("为数组赋值\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", numArr[i]);
    }

    int temp = 0;
    for (int i = 0; i < n; i++) {
        temp = numArr[i];
        numArr[i] = numArr[n - i];
        numArr[n - i] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", numArr[i]);
    }



    return 0;
}
