#include "stdio.h"

int main()
{

    int a = 10;

    //1.定义一个指针去指向变量a
    int* p = &a;

    //2.利用指针去获取变量中的数据
    printf("%d\n", *p);

    //3.利用指针去存储数据 / 修改数据
    *p = 200;
    printf("%d\n", a);

    char c = 'a';
    char* p1 = &c;

    long long n = 100;
    long long* p2 = &n;

    printf("%zu\n", sizeof(p1));
    printf("%zu\n", sizeof(p2));

    return 0;
}