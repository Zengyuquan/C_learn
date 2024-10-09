#include <stdio.h>

int main() {

    int n = 0;
    if(scanf("%d", &n) != 1)
    {
        printf("输入无效，请输入一个整数\n");
        return 1;
    }

    if(n<3 || n > 10)
    {
        printf("输入的整数不在范围内!");
        return 1;
    }

    int numArr[n];
    for (int i = 0; i < n; i++) {
        if(scanf("%d", &numArr[i]) != 1)
        {
            printf("输入无效，请输入一个整数");
        }
    }


    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", numArr[i]);
    }
    printf("\n");


    return 0;
}

