#include <stdio.h>
struct  student
{
    int num;
    char name[20];
    char sex;
    int age;
};
struct student stu[3]={{10101,"Li lin",'M',18},{10102,"Zhang Fun",'M',19},
                       {10104,"Wang Min",'F',10}};
                      //定义指向结构体数组并初始化
int  main()
    {
        struct student *p;
        printf("No. Name                    sex age\n");
        for ( p = stu; p < stu+3; p++)
        {
            printf("%5d %-20s %2c %4dw\n",p->num,p->name,p->sex,p->age);
        }                               //输出结果
        return 0;
    }