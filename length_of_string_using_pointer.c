//Length of string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],*p1;
    int i,count=0;
printf("Enter string:\n");
scanf("%s",&str);
p1=&str;
while(*p1!='\0')
{
p1++;
count++;
}
printf(" Length of string :%d",count);
}