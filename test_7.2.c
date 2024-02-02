#include <stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c;
    printf("please input two number:");
    scanf("%d,%d",&a,&b);//输入两个整数
    c=max(a,b);          //调用max函数,得到一个值，赋给c
    printf("max is %d\n",c);//输出c的值就是两个整数中的大者
    return 0;
}

int max(int x,int y)//定义max函数,函数类型为int型，两个参数为int型
{
    int z;//变量z用来存放两个整数中的大者,int型
    if(x>y)z=x;
    else z=y;
    return(z);
}