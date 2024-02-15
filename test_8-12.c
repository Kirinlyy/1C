#include <stdio.h>
int main()
{
    char a[]="I am a body.",b[20],*p1,*p2;
    int i;
    p1=a;//p1指向字符串a的第1个字符
    p2=b;//p2指向字符串b的第1个字符
    for(;*p1!='\0';p1++,p2++)
      *p2=*p1;//将p1指向的a串中的字符复制到p2所指向的b串中的位置
    *p2='\0';//最后在p2所指的位置上赋予一个'\0'的字符
    printf("string a is:%s\n",a);
    printf("string b is:");
    for(i=0;b[i]!'\0';i++)
      printf("%c",b[i]);
    printf("\n");
    return 0;
}