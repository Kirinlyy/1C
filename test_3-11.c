#include <stdio.h>
int main()
{
    unsigned short int a;//定义a为无符号短整型变量
    short int b;         //定义b为有符号短整型变量
    a=65535;   //2字节16位全为1
    b=a;       //b的数值范围为-32768~32767
    printf("%d\n",b);
    return 0;
}