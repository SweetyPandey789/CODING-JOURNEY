#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2;
    printf("Enter the coefficients :");
    scanf("%d%d%d",&a,&b,&c);
    int d = b*b - 4*a*c;
    if(d>0)
    {
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        printf("Roots are real and different :");
        printf("x1 = %d and x2 = %d ",x1,x2);
    }
    else if(d==0)
    {
        x1 = -b/2*a;
        printf("roots are real and equal :");
        printf("x1 = %d,%d",x1,x1); 
    }
    else{
        x1 = (-b + sqrt(-d))/2*a;
        x2 = (-b - sqrt(-d))/2*a;
        printf("roots are Imaginary and different :");
        printf("x1 = %d and x2 = %d",x1,x2);
    }

    return 0;
}