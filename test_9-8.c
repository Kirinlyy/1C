#include <stdio.h>
#define NULL 0
struct student             //声明结构体类型struct student
{
    int num;
    float score;
    struct student *next;
};
int main()
{
    struct student a,b,c,*head,*p;    //定义3个结构体变量
    a.num=10101;a.score=89.5;         //对结点a的num和score成员赋值
    b.num=10103;b.score=90;           //对结点b的num和score成员赋值
    c.num=10107;c.score=85;           //对结点c的num和score成员赋值
    head=&a;                          //对结点a的起始地址赋给头指针head
    a.next=&b;                        //对结点b的起始地址赋给a结点的next成员
    b.next=&c;                        //对结点c的起始地址赋给a结点的next成员
    c.next=NULL;                      //c结点的next成员不存放其他结点地址
    p=head;                           //使p也指向a结点
    do
      {printf("%ld %5.1f\n",p->num,p->score);  //输出p指向的结点的数据
        p=p->next;     //使p指向下一个结点
    }while(p!=NULL);   //输出第2个结点中的数据
    return 0;
}