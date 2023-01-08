//Addition using pointer
#include<stdio.h>
int main()
{
int p;
int *ptr=&p;
printf("Enter value");
scanf("%d",ptr);
*ptr=*ptr+5;
printf("%d\n",*ptr);
printf("%d",p);
}