#include "stdio.h"

void swap(int* p1, int* p2);


int main()
{
    //1.定义两个变量
    int a = 10;
    int b = 20;

    //2.调用swap函数
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b);


}
void swap(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}