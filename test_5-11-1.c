#include <stdio.h>
int main()
{
    int sum=0,i;
    scanf("%d",&i);
    while (i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("sum=%d\n",sum);
    return 0;
}