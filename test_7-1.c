#include <stdio.h>
int main()
{
    void printf_star();//对printf_star函数进行声明
    void printf_message();//对printf_message函数进行声明
    printf_star();//调用printf_star函数,输出一行*字符
    printf_message();//调用printf_message函数,输出一行信息
    printf_star();//调用printf_star函数,输出一行*字符
    return 0;
}
//下面分别定义print_star和print_message函数
void printf_star()//定义printf_star函数
{
    printf("******************\n");
}

void printf_message()//定义printf_message函数
{
    printf("  How do you do!\n");
}