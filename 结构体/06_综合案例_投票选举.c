#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct spot
{
    char name[100];
    int count;
};

int main()
{
    // 定义数组存储4个spot类型的变量
    struct spot arr[4] = {{"A", 0},{"B", 0},{"C", 0},{"D", 0}};


    // 2.模拟80名同学的投票
    srand(time(NULL));

    for (int i = 0; i < 80; i++) {
        int choose = rand() % 4;

        arr[choose].count++;
    }

    // 找最大值
    int max = arr[0].count;
    for (int i = 0; i < 4; i++) {
        struct spot temp = arr[i];
        if(temp.count > max)
        {
            max = temp.count;
        }
    }

    // 找最大值
    for (int i = 0; i < 4; i++) {
        struct spot temp = arr[i];
        if(temp.count == max)
        {
            printf("投票最多的景点为：%s,共计：%d张票\n", temp.name, temp.count);
            break;
        }
    }

    // 3.遍历
    for (int i = 0; i < 4; i++) {
        struct spot temp = arr[i];
        printf("%s %d\n", temp.name, temp.count);
    }
    return 0;
}