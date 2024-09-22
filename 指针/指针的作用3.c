#include "stdio.h"

int getRemainder(int num1, int num2, int* res);


int main()
{
    //1.定义两个变量
    int a = 10;
    int b = 0;
    int res = 0;

    //2.调用函数取余
    int flag = getRemainder(a, b, &res);

    //3.对状态进行判断
    if(!flag)
    {
        printf("获取到的余数为：%d\n", res);
    } else
    {
        printf("除数不能为零");
    }

    return 0;
}

int getRemainder(int num1, int num2, int* res)
{
    if(num2 == 0)
    {
        return 1;
    }
    *res = num1 % num2;
    return 0;
}