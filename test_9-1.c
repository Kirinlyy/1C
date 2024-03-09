#include <stdio.h>
int main()
{
    struct student
      {
        int num;
        char name[20];
        char sex;
        char addr[20];
      }student1={10101,"Li Lin",'M',"123 Beijing Road"};
                                    //对student1初始化
    printf("NO.:%d\nname:%s\nsex:%c\naddress:%s\n",student1.num,student1.name,
    student1.sex,student1.addr);
    return 0;
}