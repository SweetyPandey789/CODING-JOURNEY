# include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=6;j++)
        {
            if((j==2||j==3||j==4||j==5)&&(i==2))
            {
                printf(" ");
            }
            else if((j==2||j==3||j==4||j==5||j==6)&&(i==3))
            {
                printf(" ");
            }
            else if((j==1||j==2||j==3||j==4||j==5)&&(i==5))
            {
                printf(" ");
            }
             else if((j==2||j==3||j==4||j==5)&&(i==6))
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