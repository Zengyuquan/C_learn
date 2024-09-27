#include "stdio.h"

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{

    // 1.定义一个数组去装四个函数的指针
    // 函数指针数组
    int (*arr[4])(int, int) = {add, subtract, multiply, divide};

    // 2.用户键盘录入三个数据
    printf("请录入两个数字参与计算:\n");
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);

    int choose;
    printf("请录入一个数字表示要进行的计算:\n");
    scanf("%d", &choose);

    // 3.根据用户的选择，来调用不同的函数
    int res = (arr[choose - 1])(num1, num2);

    // 4.输出打印
    printf("%d\n", res);

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    return num1 / num2;
}