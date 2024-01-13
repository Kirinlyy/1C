#include <stdio.h>
#include <string.h>
int main()
{
    char string[20];//用来存放“最大”的字符串
    char str[3][20];//存放3个字符串
    int i;
    for ( i = 0; i < 3; i++)
        gets(str[i]);       //先后读入3个字符串
    if (strcmp(str[0],str[1])>0)//把串0和串1比较，如果串0>串1
       strcpy(string,str[0]);//把串0复制到string中
    else
        strcpy(string,str[1]);//如果串0≤串1，把串1复制到string中
    if(strcmp(str[2],string)>0)//把串2和string比较，如果串2>string
       strcpy(string,str[2]);//把串2复制到string中
    printf("the largest string is:\n%s\n",string);//输出string
    return 0;
}