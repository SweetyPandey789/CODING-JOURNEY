#include<stdio.h>
int sum(int n1,int n2)
{
     return n1+n2; 
}
int sub(int n1,int n2)
{
return n1-n2;
}
int mul(int n1,int n2)
{
       return n1*n2;
}
int div(int n1,int n2)
{
 return n1/n2;
}
int mod(int n1,int n2)
{
    return n1%n2;
}
int main()
{ int a,b;
    printf("Enter two value\n");
    scanf("%d %d",&a,&b);
    printf("addition of the number is %d\n",sum(a,b));
    printf("subtraction of the number is %d\n",sub(a,b));
    printf("multiplication of the number is %d\n",mul(a,b));
    printf("division of the number is %d\n",div(a,b));
    printf("modulus of the number is %d\n",mod(a,b));
    return 0;
}