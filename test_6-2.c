#include <stdio.h>
int main()
{
    int i;
    int f[20]={1,1};//最前面两个元素f[0]和f[1]的值是1,1
    for(i=2;i<20;i++)//求出发f[2]到f[19]的值
      f[i]=f[i-2]+f[i-1];
    for ( i = 0; i < 20; i++)
    {
        if(i%5==0) printf("\n");//如i能被5整除，插入一个换行
           printf("%12d",f[i]);//输出各元素的值
    }
    printf("\n");
    return 0;
}