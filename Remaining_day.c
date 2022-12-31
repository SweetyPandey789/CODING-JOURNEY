//Write a program to find months and remaining day from total days
# include<stdio.h>
int main()
{
int months, days ;
printf("Enter days") ;
scanf("%d", &days) ;
months = days / 30 ;
days = days % 30 ;
printf("Months = %d Days = %d", months, days) ;
}
