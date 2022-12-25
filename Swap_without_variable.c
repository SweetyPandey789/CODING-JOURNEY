//SWAPPING OF TWO NUMBER WITHOUT USING THIRD VARIABLE
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value a and b\n");
    scanf("%d %d",&a,&b);
    a=b+a;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d\n b=%d",a,b);
    return 0;
}
//SWAPPING OF TWO NUMBER USING INITIALISATION
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swapping a=%d b=%d\n",a,b);
    a=b+a;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d b=%d",a,b);
    return 0;
}