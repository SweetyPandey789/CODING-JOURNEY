#include<stdio.h>
int main()
{
    char H[]="Hello world";
    int i=0;
while(H[i]!='\0')
    {
        printf("%c",H[i]);
        i++;
    }return 0;
}