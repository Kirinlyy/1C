#include <stdio.h>
int main(){
    float score,sum=0,average;
    int i,n=0;
    for(i=1;i<6;i++)//假设有5个学生
    {
        printf("please enter score:");//输入学生成绩
        scanf("%f",&score);           
        if(score<60)                 //如果不及格
        {
            printf("Fail:%7.2f\n",score);//输出不及格的成绩
            continue;//跳过下面的语句，结束本次循环
        }
        sum=sum+score;
        n=n+1;//n用来统计及格学生人数
    }
    average=sum/n;//及格学生平均分数
    printf("\nn=%d,average=%7.2f\n",n,average);//输出及格学生人数和平均分数
    return 0;
}
