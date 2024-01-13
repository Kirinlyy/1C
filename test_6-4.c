#include <stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};//定义a数值并赋初值
    int b[3][2],i,j;//定义b数值，未赋初值
    printf("array a;\n");
    for(i=0;i<2;i++)//用i控制行数的变化
      {
        for (j=0;j<3;j++)//用j控制列数的变化
        {
            printf("%5d",a[i][j]);//输出a数组中i行j列元素
            b[j][i]=a[i][j];      //将a数组i行j列元素赋给b数组
        }
        printf("\n");
      }
    printf("array b:\n");
    for(i=0;i<3;i++) //输出b数组各元素
    {
        for(j=0;j<2;j++)
         printf("%5d",b[i][j]);
        printf("\n");
    }
    return 0;
}