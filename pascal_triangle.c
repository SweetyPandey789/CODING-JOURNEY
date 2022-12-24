#include<stdio.h>
int calc(int);
int main()
{
    int i,j,row,pass;
    printf("Enter no.of rows in pascaL triangle");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<=(row-i-1);j++)
        printf(" ");
        for(j=0;j<=i;j++)
        {
            pass=calc(i)/(calc(j)*calc(i-j));
            printf(" %d ",pass);
        }
        printf("\n");
    }
    return 0;
}
int calc(int num)
{
    int x;
    int res=1;
    for(x=1;x<=num;x++)
    res=res*x;
    return(res);
}