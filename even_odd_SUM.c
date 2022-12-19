#include<stdio.h>
void main()
{
    int i,num,odd_sum=0,even_sum=0;//initialisation of the variable
    printf("Enter the value of num\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)//conditional statement
    {
        if(i%2==0)
       {
        even_sum+=1;
       }
       else{
        odd_sum+=1;
       }

    }
    printf("Sum of all odd numbers=%d\n",odd_sum);
    printf("Sum of all even numbers=%d\n",even_sum);
}