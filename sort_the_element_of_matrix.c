//Sort all elements of 2D array row wise having 3 row and 3 column
#include<stdio.h>
int main()
{
int row,column,i,j,arr[20][20],max=0;
printf("enter size of row:");
scanf("%d",&row);
printf("Enter size of column:");
scanf("%d",&column);
printf("Enter the element");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
int k;
for(i=0;i<row;i++)
{
for(j=0;j<column-1;j++)
{
    for(k=j+1;k<row;k++)
    {
        if(arr[i][j]>arr[i][k])
        {
            int temp=0;
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
}
}
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
       printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
return 0;
}