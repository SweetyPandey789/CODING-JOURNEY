//Write a program to show actual value and address of variable
# include<stdio.h>
int main()
{
    int a=23;
    int *p=&a;
    printf("Address of a=%x\n",&p);
    printf("Address of p=%x\n",p);
    printf("value of a=%d\n",a);
    printf("value of *P=%d\n",*p);
}