#include <stdio.h>
#include <math.h> //要调用数学函数sqrt，必须包含math.h头文件
int main (){
    double a,b,c,s,area;
    scanf("%lf,%lf,%lf",&a,&b,&c);//输入三角形的三个边值
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%f\nb=%f\nc=%f\narea=%f\n",a,b,c,area);
    return 0;
}