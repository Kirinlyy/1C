#include <stdio.h>
int main()
{
    char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},
                      {' ','*',' ','*'},{' ',' ','*'}};//初始化
    int i,j;
    for ( i = 0; i < 5; i++)//控制行
    {
        for(j=0;j<5;j++)//控制列
           printf("%c",diamond[i][j]);//逐个输出数组中的元素
        printf("\n");
    }
    return 0;
}