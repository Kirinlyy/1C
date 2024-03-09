#include <stdio.h>
int main()
{
  void link_string(char *arr1,char *arr2);//函数声明
  char a[40]="I am a teather.";//定义a为字符指针变量，指向一个字符串
  char b[]="You are a student";//定义b为字符数组，内放一个字符串
  char *p1=a,*p2=b;            //字符指针变量p指向字符数组b的首元素
  printf("string a:%s\nstring b:%s\n",p1,p2);
  link_string(p1,p2);
  printf("Now,\nstring a:%s\nstring b:%s\n",a,b);
  return 0;
}

void link_string(char *arr1,char *arr2)
{
    int i;
    for(i=0;*arr1!='\0';i++)
      arr1++;
    for(;*arr2!='\0';arr1++,arr2++)
        *arr1=*arr2;
    *arr1='\0';
}