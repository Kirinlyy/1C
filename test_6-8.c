#include <stdio.h>
int main()
{
  char string[81];
  int i,num=0,word=0;//开始时,单词数为0，未出现单词
  char c;            //c用来存放当前需要判断的字符
  gets(string);      //读入一个字符串，放在string数组中
  for(i=0;(c=string[i])!='\0';i++)//从第1个字符起，到最后一个字符
    if(c==' ')word=0;//如果当前一个字符串,则使word置0
    else if(word==0)//若当前字符是空格，而且前一空格是空格
      {word=1;      //使word置1   
       num++;       //使num加1
         }            
  printf("There are %d words in this line.\n",num);
  return 0;
}