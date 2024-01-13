#include <stdio.h>
int main()
{
    int i,a[10];  //定义整型变量i和整型数组a，a有10个元素
    for(i=0;i<=9;i++)//先后对10个数组元素赋值
      a[i]=i;
    for(i=9;i>=0;i--)
      printf("%d",a[i]);//按逆序先后输出数组a中的10个元素
    printf("\n");
    return 0;
}