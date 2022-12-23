#include<stdio.h>
int main()
{
    int i,j;
    printf("Hollow rectangle pattern\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((j==2||j==3||j==4)&&(i==2||i==3||i==4))
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}