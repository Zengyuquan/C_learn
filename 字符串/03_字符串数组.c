#include <stdio.h>

int main()
{

    // 1.定义一个二维数组，存储多个学生的名字
    char strArr[5][100] =
            {
                "zhangsan",
                "lisi",
                "wangwu",
                "zhaoliu",
                "qianqi"
            };

    // 2.遍历二维数组
    for (int i = 0; i < 5; i++) {
        // i:依次表示二维数组中的每一个索引
        char* str = strArr[i];
        printf("%s\n", str);
    }
    printf("-----------------------------\n");
    // 第二种方法
    // 把五个字符串的指针，放到一个数组当中
    char* strArr2[5] =
            {
                    "zhangsan",
                    "lisi",
                    "wangwu",
                    "zhaoliu",
                    "qianqi"
            };


    // 遍历
    for (int i = 0; i < 5; i++) {
        char* str = strArr2[i];
        printf("%s\n", str);
    }

    return 0;
}