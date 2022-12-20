//subtract two numbers without using subtraction operator
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter any two integers");
    scanf("%d%d",&a,&b);
    sum=a+~b+1;/*~ Bitwise complement, 1- ~b =1s complement and ~b+1=2s complement */

    printf("Difference of two integers: %d",sum);
    return 0;
}
