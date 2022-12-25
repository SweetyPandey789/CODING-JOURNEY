// //METHOD-1 USING POWER FUNCTIONS
#include<stdio.h>
#include<math.h>
int main()
{
    int n,cube;
    printf("Enter the value\n");
    scanf("%d",&n);
   cube= pow(n,3);
   printf("%d",cube);
   return 0;}
//METHOD-2 USING SIMPLE CALCUATION
#include<stdio.h>
int main()
{
    int num,cube;
    printf("Enter value\n");
    scanf("%d",&num);
    cube=num*num*num;
    printf("%d",cube);
    return 0;
}
//METHOD -3 USING FUNCTION
#include<stdio.h>
int cube(int n)
{ return n*n*n; }
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",cube(n));
    return 0;
}