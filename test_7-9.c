#include <stdio.h>
int main()
{
    void sort(int arrayp[],int n);//对sort函数的声明
    int a[10],i;
    printf("enter the array:\n");
    for(i=0;i<10;i++)//输入a数组10个元素
       scanf("%d",&a[i]);
    sort(a,10);//调用sort函数
    printf("The sorted array:\n");
    for(i=0;i<10;i++)//输出已排好序的10个数
       printf("%d ",a[i]);
    printf("\n");
    return 0;
}

void sort(int array[],int n)
{
    int i,j,k,t;
    for ( i = 0; i < n-1; i++)//选择法排序函数
    {
        k=i;                  //k用来存放当前"最小"的元素的序号
        for(j=i+1;j<n;j++)    //将第i个元素与其后各元素比较
          if(array[j]<array[k])//如果第j个元素比第k个元素小
            k=j;               //把当前最小元素的序号j保存在k中
        t=array[k];array[k]=array[i];array[i]=t;//将最小元素与array[i]对换
    }
}