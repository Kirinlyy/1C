#include <stdio.h>
int main(){
    void copy_string(char * from,char *to);//函数声明
    char *a="I am a teacher.";             //定义a为字符指针变量，指向一个字符串
    char b[]="You are  a student.";        //定义a为字符指针变量，指向一个字符串
    char *p=b;                             //字符指针变量p指向字符数组b的首元素
    printf("string a=%s\nstring b=%s\n",a,p);
    printf("\ncopy string a to string b:\n");
    copy_string(a,p);                      //用字符串作为形参
    printf("string a=%s\nstring b=%s\n",a,p);
    return 0;
}
void copy_string(char *from,char *to)
{  
    for(;*from!='\0';from++,to++)
    {
        *to=*from;
    }*to='\0';
}