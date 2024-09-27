#include "stdio.h"
#include "string.h"

struct Message
{
    char phone[12];
    char mail[50];
};

struct Student
{
    char name[50];
    int age;
    char gender;
    double height;
    struct Message msg;
};

int main()
{

    // 1.定义学生类型的变量
    struct Student stu;

    // 2.给里面的每一个成员赋值
    strcpy(stu.name, "zhansan");
    stu.age = 23;
    stu.gender = 'M';
    stu.height = 1.78;

    strcpy(stu.msg.phone, "13112345678");
    strcpy(stu.msg.mail, "1234567890@qq.com");

    // 3.输出打印
    printf("学生的信息：\n");
    printf("姓名为：%s\n", stu.name);
    printf("姓名为：%d\n", stu.age);
    printf("姓名为：%c\n", stu.gender);
    printf("姓名为：%lf\n", stu.height);

    printf("手机号为：%s\n", stu.msg.phone);
    printf("邮箱号为：%s\n", stu.msg.mail);

    printf("---------------------------------------\n");

    struct Student stu2 = {"lisi", 24, 'F', 1.65, {"12799483260", "835572395@qq.com"}};
    printf("学生的信息：\n");
    printf("姓名为：%s\n", stu2.name);
    printf("姓名为：%d\n", stu2.age);
    printf("姓名为：%c\n", stu2.gender);
    printf("姓名为：%lf\n", stu2.height);

    printf("手机号为：%s\n", stu2.msg.phone);
    printf("邮箱号为：%s\n", stu2.msg.mail);

    return 0;
}