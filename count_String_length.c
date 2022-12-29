//Write a program to count String length
#include<stdio.h>
void main()
{
    int len=0;char s[10];
    printf("Enter a string:");
    gets(s);
    while(s[len]!='\0')
    {
        len++;
        }
    printf("\n length:%d",len);

}