#include <stdio.h>

int main() {

    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 键盘录入数据
    for (int i = 0; i < len; i++) {
        printf("请录入第%d个元素\n", i + 1);
        scanf("%d", &arr[i]);
    }

    return 0;
}
