#include <stdio.h>
int main()
{
    void hanoi(int n,char x,char y, char z);
    int m;
    printf("input the number of dishes:");
    scanf("%d",&m);
    printf("The step to moving %d dishes:\n",m);
    hanoi(m,'A','B','C');
    return 0;
}

void hanoi(int n,char x,char y,char z)
{
    void move(char a, char b);
    if (n==1) move(x,z);
    else
    {
        hanoi(n-1,x,z,y);
        move(x,y);
        hanoi(n-1,y,x,z);
    }    
}

void move(char a, char b)
{
    printf("%c-->%c\n",a,b);
}