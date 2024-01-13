#include <stdio.h>
#include <math.h>
int main()
{
  int m,i,k;
  printf("please enter a integer number:");
  scanf("%d",&m);            //输入一个整数m
  k=(int)sqrt(m);            //对m求平方根，再取整
  for ( i = 2; i <=k; i++)   //i作为除数
    if(m%i==0) break;        //如果m被i整除，m肯定不是素数
  if(i>k)printf("%d is a prime number.\n",m);
  else printf("%d is not a prime number.\n",m);
  return 0;
}