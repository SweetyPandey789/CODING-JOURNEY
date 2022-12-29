//Write a program to count words in a string
#include<stdio.h>
int main()
{
    int len=0,c=1;
    char s[40];
    printf("Enter a string");
    gets(s);
    while(s[len]!='\0')
    {
        if(s[len]==' ')
        {
        c++;
        }
            len++;
    
    }
    printf("total words %d",c);
}