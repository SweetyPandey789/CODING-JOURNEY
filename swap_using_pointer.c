//Write a program to swap using pointer
# include<stdio.h>
int main()
{
    int a=86;
    int b=95;
    int *p=&a;
    int *q=&b;
    printf("a=%d \nb=%d\n",*p,*q);
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("a=%d\n b=%d",*p,*q);
}