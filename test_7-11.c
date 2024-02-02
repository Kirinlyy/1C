#include <stdio.h>
int Row,Column;//定义全局变量Row和Column
int main()
{
    float highest_score(float array[4][5]);
    float score[4][5]={{61,73,85.5,87,90},{72,84,66,88,78},
                        {75,87,93.5,81,96},{65,85,64,76,71}};
    printf("The highest score is %6.2f\n",highest_score(score));
    printf("Student No.is %d\nCourse No.is %d\n",Row+1,Column+1);
    return 0;
}

float highest_score(float array[4][5])
{
    int i,j;
    float max;
    max=array[0][0];
    for(i=0;i<4;i++)
      for(j=0;j<5;j++)
        if(array[i][j]>max){
            max=array[i][j];
            Row=i;    //将行的序号赋给全局变量Row
            Column=j; //将列的序号赋给全局变量Column
        }
    return(max);
}