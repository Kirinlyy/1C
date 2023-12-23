#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    double cost,price,total;
    printf("please enter number and price:");
    scanf("%d,%lf",&number,&price);  //输入件数和单价
    if(number>=500)cost=0.15;
    else if(number>=300)cost=0.10;
    else if(number>=100)cost=0.075;
    else if(number>=50)cost=0.05;
    else cost=0;
    total=number*price*(1-cost);
    printf("TOtal=%10.2f\n",total);
    return 0;
}