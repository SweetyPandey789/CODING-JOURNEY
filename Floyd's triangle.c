#include<stdio.h>
int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}