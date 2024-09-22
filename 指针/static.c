#include "stdio.h"

int* method();

int main()
{

    int* p = method();

    printf("%d\n", *p);

    return 0;
}

int* method()
{
    static  int a = 10;
    return &a;
}