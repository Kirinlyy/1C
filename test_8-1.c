#include <stdio.h>
int main()
{
    int a,b;                   //定义两个int型变量
    int *pointer_1, *pointer_2;//定义两个指针变量,它们指向int型变量
    a=100;b=10;                
    pointer_1=&a;              
    pointer_2=&b;
    printf("a=%d,b=%d\n",a,b);
    printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);
    return 0;
}