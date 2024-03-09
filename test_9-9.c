#include <stdio.h>
#include <malloc.h>//用malloc函数开辟新单元时需用此头文件
#define LEN sizeof(struct student)//LEN代表struct student类型数据的字节数
struct student          //声明struct student类型
{int num;               
 float score;
 struct student *next;
};

int main()
{
    struct student a,b,c,*head,*p;//定义3个结构体变量作为链表
       //建立链表
    head=p=(struct student*)malloc(LEN);//开辟一个新单元，并让p和head指向它
    scanf("%d,%f",&p->num,&p->score); //输入第1个结点的数据
    p=(struct student*)malloc(LEN);   //开辟第2个新单元，并让p指向它
    scanf("%d,%f",&p->num,&p->score);//输入第2个结点的数据
    head->next=p;                    //使第1个结点中的next成员指向第2个结点
    p->next=NULL;                    //使第2个结点中的next成员不指向任何对象
       //输出两个结点中的数据
    p=head;                          //使p指向第1个结点
    printf("\n结点1:%d,%6.2f\n",p->num,p->score);//输入第1个结点中的数据
    p=p->next;                                   //使p指向第2个结点
    printf("结点1:%d,%6.2f\n",p->num,p->score);  //输出第2个结点中的数据
    return 0;
}