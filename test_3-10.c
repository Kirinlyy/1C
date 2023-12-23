#include <stdio.h>
int main()
{
    unsigned short a;//定义a为无符号整型变量
    short int b;//定义b为有符号短整型变量
    b=-1;
    a=b;
    printf("%u\n",a);
    return 0;
}