#include "stdio.h"
#include "string.h"

typedef struct Student
{
    char name[100];
    int age;
} S;

// 细节：因为这个函数用到结构体，所以函数的申明必须写在结构体下面，否则代码会报错
void method(S st);
void method2(S* p);

int main()
{
    // 1.定义一个学生
    S stu;

    // 2.给学生赋初始值
    strcpy(stu.name, "aaa");
    stu.age = 0;

    // 3.输出打印
    printf("学生的初始化数据为：%s, %d\n", stu.name, stu.age);

    // 4.调用函数改修学生中的数据
    method2(&stu);

    // 5.输出打印
    printf("学生的初始数据为：%s, %d\n", stu.name, stu.age);

    return 0;
}

// 细节
// 如果函数中写的是结构体类型的变量，相当于是定义一个新的变量
// 此时是把main函数中stu中的数据，传递给method函数，并把stu中的数据赋值给了新的变量st
// 我们函数中，仅仅是修改变量st中的值，对main函数中stu的值，是没有进行修改的

void method(S st)
{
    printf("接收到main函数中学生的初始化数据为：%s, %d\n", st.name, st.age);

    // 修改
    printf("请输入要修改学生名字\n");
    scanf("%s", st.name);
    printf("请输入要修改学生\n");
    scanf("%d",&(st.age));

    printf("在method函数中修改之后，学生的信息为：%s,%d\n", st.name,st.age);
}


// 如果要在函数中修改stu的值，此时就不要再定义新的变量了
// 直接接收stu的内存地址，通过内存地址就可以修改stu中的数据了
// 指针p里面记录的是main函数中stu的内存地址（stu学生）
void method2(S* p)
{
    printf("接收到main函数中学生的初始化数据为：%s, %d\n", (*p).name, (*p).age);

    // 修改
    printf("请输入要修改学生名字\n");
    scanf("%s", (*p).name);
    printf("请输入要修改学生\n");
    scanf("%d",&((*p).age));

    printf("在method函数中修改之后，学生的信息为：%s,%d\n", (*p).name,(*p).age);
}