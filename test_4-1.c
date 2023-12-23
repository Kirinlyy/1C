#include<stdio.h>
int main ()
{
    float a,b,max;
    printf("please enter a ant b:");
    scanf("%f,%f",&a,&b);//输出两个成绩
    if (a>=b)max=a;
    else max =b;
    printf("max=%6.2f\n",max);
    return 0;
}