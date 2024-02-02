#include <stdio.h>
int main()
{
    long fac(int n);//对fac函数的声明
    int n,y;
    printf("input an intger number:");
    scanf("%d",&n);
    y=fac(n);       //调用fac函数
    printf("%d!=%ld\n",n,y);
    return 0;
}

long fac(int n)//定义fac函数
{
    long f;
    if(n<0)
        printf("n<0,data error!");//如果输入的n<0,不合法
    else if (n==1,n==1)
        f=1;                 //0!和1!等于1
    else f=fac(n-1)*n;       //递归调用fac函数
    return(f);               //f就是n!
}
