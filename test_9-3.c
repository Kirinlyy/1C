#include <stdio.h>
#include <stdio.h>
struct person                            //声明结构体类型struct person                           
{char name[20];             //候选人姓名          
 int count                 //候选人得票数
}leader[3]={"Li",0,"Zhang",0,"Fun",0};//定义结构体数组并初始化

int main()
{
  int i,j;
  char leader_name[20];//定义字符数组
  for ( i = 1; i <=10; i++)
  {
    scanf("%s",leader_name);//输入所选的候选人姓名
    for ( j = 0; j < 3; j++)
    {
        if(strcmp(leader_name,leader[j].name==0)) leader[j].count++;
             //如果输入的姓名和某一元素中的name成员相同，就给该元素的count成员加1
    }
    printf("\nRESTUCT:\n");
    for(i=0;i<3;i++)
    printf("%5s:%d\n",leader[i].name,leader[i].count);
    //输出数组所有元素中的信息
  }
  return 0;
}