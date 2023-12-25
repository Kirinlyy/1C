#include <stdio.h>
int main()
{
    float amount,sum=0;
    do
    {
        scanf("%f",&amount);
        sum=sum+amount;
    } while (sum<10000);
    printf("sum=0=%9.2f\n",sum);
    return 0;
    
}