#include "stdio.h"
#include "string.h"

union MoneyType
{
    int moneyi;
    double moneyd;
    char moneystr[100];
};

int main()
{

    // 1.利用共用体定义钱的变量
    union MoneyType money;

    // 2.赋值
    // 每次只能赋一个值
    money.moneyi = 9;
//    money.moneyd = 123.45;
//    strcpy(money.moneystr, "100万");

    // 3.输出打印
    printf("%d\n", money.moneyi);
//    printf("%lf\n", money.moneyd);
//    printf("%s\n", money.moneystr);

    return 0;
}

