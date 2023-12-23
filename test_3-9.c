#include <stdio.h>
#include<math.h>//程序中要调用平方根函数sqrt
int main()
{
    double a,b,c,disc,x1,x2,p,q;//disc是判别式sqrt(b*b-4ac)
    scanf("a=%lf,b=%lf,c=%lf",&a,&b,&c);//输入双精度数要用格式声明"%lf"
    disc=b*b-4*a*c;
    p=-b/(2*a);
    q=sqrt(disc)/(2*a);
    x1=p+q;x2=p-q;//输出方程的两个根//输出
    printf("x1=%5.2f\nx2=%5.2f\n",x1,x2);//求出方程的两个根
    return 0;
}