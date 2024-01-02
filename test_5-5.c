#include<stdio.h>
int main()
{
    double p=141178e4,r=0.01;
    int year;
    for (year  = 0; p < 2e9; year++)
    {
        p=p*(1+r);
    }
    printf("year=%d,p=%e\n",year-1,p);
    return 0;
}