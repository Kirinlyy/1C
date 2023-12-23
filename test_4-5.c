#include<stdio.h>
int main()
{
    int year,leap;
    printf("please enter a year:");
    scanf("%d",&year);
    if(year%4==0) leap=0;   //用以下4行取代上面程序第6~17行
    else if(year %100!=0)leap=1;
    else if(year %400!=0)leap=0;
    else leap=1;
    if(leap)    
       printf("%d is ",year);
    else
       printf("%d is not ",year);
    printf("a leep year.\n");
    return 0;
}