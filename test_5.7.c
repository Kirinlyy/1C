#include <stdio.h>
int main(){
    float score,sum=0,average;
    int i,n=0;
    for(i=1;i<6;i++)
    {
        printf("please enter score:");
        scanf("%f",&score);
        if(score<60)
        {
            printf("Fail:%7.2f\n",score);
            continue;
        }
        sum=sum+score;
        n=n+1;
    }
    average=sum/n;
    printf("\nn=%d,average=%7.2f\n",n,average);
    return 0;
}
