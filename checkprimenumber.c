#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a value");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
    
        }
        }
        if(count==2)
        {
            printf("Prime numbers");

        }
        else
        {
            printf("not prime numbers");
        }
        return 0;
}