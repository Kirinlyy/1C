#include <stdio.h>
int main(){
    char c;
    while ((c=getchar())!='\n')
    {
        if ((c>='a' && c<='z') ||  (c>='A'&&c<='Z'))
        {
            c=c+4;
            if(c>'Z' && c<='Z'+4 || c>'z')c=c-26;
        }
        printf("%c",c);
    }
    printf("\n");
    return 0;
}