#include <stdio.h>
int main()
{
    int higher(int x,int y);
    int a[10],b[10],i,n=0,m=0,k=0;
    printf("enter array a:\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    printf("\n");
    printf("enter arrayb:\n");
    for(i=0;i<10;i++)
       scanf("%d",&b[i]);
    printf("\n");
    for(i=0;i<10;i++)
      {
        if (higher(a[i],b[i])==1)
          n++;
        else
          if(higher(a[i],b[i])==0)
             m++;
          else
          k=k+1;
      }
    printf("a higher b %d times\na equal to b %d times\nb higher a %d times \nb highter a %d times\n",n,m,k);

    if(n>k)
      printf("a wins!\n");
    else if(n<k)
      printf("b wine!\n");
    else
      printf("a is equal to b\n");
    return 0;
}

higher(int x,int y)
{
    int flag;
    if(x>y) flag=1;
    else if(x<y) flag=-1;
    else flag=0;
    return(flag);
}