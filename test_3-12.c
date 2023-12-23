#include<stdio.h>
int main()
{
    unsigned short a=65535; //变量a最右边的16个二进制的值全是1
    short int b =-2;
    printf("a=%d,%o,%x,%u\n",a,a,a,a);
    printf("b=%d,%o,%x,%u\n",b,b,b,b);
    return 0;
}