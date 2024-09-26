#include "stdio.h"
#include "string.h"

struct GirlFriend
{
    char name[100];
    int age;
    char gender;
    double height;
};

int main()
{

    // 使用结构体
    // 定义一个女朋友类型的变量
    struct GirlFriend gf1;
    strcpy(gf1.name,"小诗诗");
    gf1.age = 21;
    gf1.gender = 'F';
    gf1.height = 1.70;

    // 输出打印
    printf("女朋友的名字是:%s\n", gf1.name);
    printf("女朋友的年龄是:%d\n", gf1.age);
    printf("女朋友的性别是:%c\n", gf1.gender);
    printf("女朋友的身高是:%lf\n", gf1.height);

    struct GirlFriend gf2;
    strcpy(gf2.name,"小丹丹");
    gf2.age = 20;
    gf2.gender = 'F';
    gf2.height = 1.68;

    // 输出打印
    printf("女朋友的名字是:%s\n", gf2.name);
    printf("女朋友的年龄是:%d\n", gf2.age);
    printf("女朋友的性别是:%c\n", gf2.gender);
    printf("女朋友的身高是:%lf\n", gf2.height);
    return 0;
}