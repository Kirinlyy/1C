#include <stdio.h>
#define N 5
struct student//声明结构体类型struct student
{
    int num;
    char name[20];
    float score;
};
int main()
{
    struct student stu[5]={{10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",   //定义struct student类型的变量stu_1
    86},{10108,"Ling",73.5}};              
    struct student temp;                           //定义结构体变量temp，用作交换时的临时变量
    int i,j,k;
    printf("The order is:\n");
    for(i=0;i<N-1;i++)
    {
        k=1;
        for(j=i+1;j<N;j++)
          if(stu[j].score>stu[k].score)           //进行成绩的比较
              k=j;
        temp=stu[k];stu[k]=stu[i];stu[i]=temp;      //stu[k]和stu[i]元素整体互换
    }
    for ( i =0; i <N; i++)
      printf("%6d %8d %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
    printf("\n");          //输出结果
    return 0;
}
