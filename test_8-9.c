#include <stdio.h>
int main()
{ 
    void sort(int x[],int n);
    int *p,i,a[10];
    p=a;
    for(i=0;i<10;i++)
      scanf("%d",p++);
    p=a;
    sort(p,10);
    for(p=a,i=0;i<10;i++)
      {printf("%d",*p);p++;}
    printf("\n");
    return 0;
}

void sort(int x[],int n)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    { k=i;
      for(j=i+1;j<n;j++)
        if(x[j]>x[k])k=j;
    if(k!=i)
    {t=x[i];x[i]=x[k];x[k]=t;}}
}