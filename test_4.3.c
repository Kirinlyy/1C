#include <stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("please enter a,b,c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)//检查构成三角形的必要条件是否满足
    {
        s=0.5*(a+b+c);
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%6.2f\n",area);
            }                       //大括号内是一个符合语句
            else
            printf("It is not a trilateral.\n");
            return 0;
}