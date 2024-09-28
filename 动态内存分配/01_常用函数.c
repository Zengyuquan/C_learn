#include "stdio.h"
#include "stdlib.h"

int main()
{

    // 1.malloc函数申请一片连续的空间
    //  需求：申请一片空间，要存储10个int类型的整数
    // 返回这篇空间的首地址

    int* p = malloc(100 * sizeof(int));

    printf("%p\n", p);

    // 2.赋值
    for (int i = 0; i < 10; i++) {
        // 第一种赋值
        *(p + i) = (i + 1) * 10;

        // 第二种赋值
        p[i] = (i + 1) * 10;
    }

    // 3.遍历
    for (int i = 0; i < 10; i++) {
//        printf("%d ", *(p + i));
        printf("%d ", p[i]);
    }

    printf("\n扩容后：\n");
    // 4.扩容，20个int类型的整数
    int* pp = realloc(p, 20 * sizeof (int));

    for (int i = 0; i < 20; i++) {
//        printf("%d ", *(p + i));
        printf("%d ", p[i]);
    }

    // 5.释放
    free(pp);
    return 0;
}