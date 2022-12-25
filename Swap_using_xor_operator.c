//SWAPPING USING BITWISE XOR
#include<stdio.h>
void main()
{
long i,k;
printf("Enter two integers\n");
scanf("%ld %ld",&i,&k);
printf("Before swapping i=%ld\nk=%ld",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("\nAfter swapping i=%ld\n k=%ld",i,k);
}