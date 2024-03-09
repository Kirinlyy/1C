#include <stdio.h>
int main()
{
   char a[] = "I am a boy", b[20];
   int i;
   for (i = 0; *(a + i) != '\0'; i++)
      *(b + i) = *(a + i);    //用地址法访问数组元素
   *(b + i) = '\0';           //在已复制到b数组中的字符最后加'\0'
   printf("string a is:%s\n", a);
   printf("string a is:");
   for (i = 0; b[i] != '\0'; i++)
      printf("%c", b[i]);
   printf("\n");
   return 0;
}