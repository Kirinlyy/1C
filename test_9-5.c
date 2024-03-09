#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        long num;
        char name[20];
        char sex;
        float score;
    };
    struct student stu_1;          //定义struct student 类型的变量stu_1
    struct student *p;             //定义指向struct student 类型数据的指针变量p
    p=&stu_1;//p指向结构体变量stu_1
    stu_1.num=10101;                  //对结构体变量的num成员赋值   
    strcpy(stu_1.name,"Li Lin");        //对结构体变量的变量的name成员赋值
    stu_1.sex="M";                //对结构体变量的sex成员赋值
    stu_1.score=89.5;             //对结构体变量的score成员赋值        
    printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",stu_1.num,stu_1.name,
      stu_1.sex,stu_1.score);        //输出各成员的值
    printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",(*p).num,(*p).name,
      (*p).sex,(*p).score);         //输出各成员的值
    return 0;

    
}