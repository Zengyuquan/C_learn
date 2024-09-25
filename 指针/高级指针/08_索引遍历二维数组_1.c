#include "stdio.h"

int main()
{

    // 1.定义一个二维数组
    int arr[3][5]=
            {
                    {1,2,3,4,5},
                    {11,22,33,44,55},
                    {111,222,333,444,555}
            };

    // 2.利用索引的方式进行遍历


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}