//write a program to print pallindrome number
#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("Enter a value\n");
    scanf("%d",&n);
   int c=n;
    while(n!=0)
    {
rem=n%10;
n=n/10;
rev=rev*10+rem;
}
if(rev==c)
{
    printf("Number is pallindrome %d",rev);
}
else{
    printf("Number is not pallindrome %d",rev);
}
    }
