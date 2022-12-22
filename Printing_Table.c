#include<stdio.h>
int main()
{
    int num,count;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("multiplication table for %d is:\n",num);
    for(count=1;count<=10;count++)
    {
        printf("%d x %d = %d\n",num,count,(num*count));
    }
    return 0;
}
