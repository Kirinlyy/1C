#include <stdio.h>
int main()
{ 
    int *p,i,a[10];
    p=a;             //指针变量指向数组首元素
    for(i=0;i<10;i++)
      scanf("%d",p++);
    for(i=0;i<10;i++)         
    {
     printf("%d",*p);    
    }
    printf("\n");
    return 0;
}