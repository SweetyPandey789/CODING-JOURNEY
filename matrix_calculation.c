//write a program to calculate xA+yB where Aand B are matrices
//x=2,y=3
#include<stdio.h>
int main()
{
    int i,j,x=2,y=3,row,column;
    int sum[10][20];
    int arr[10][20];
    printf("Enter the size of row\n");
    scanf("%d",&row);
    printf("Enter size of column\n");
    scanf("%d",&column);
    printf("Enter elements of array A:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
    scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter array elements b:\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
       printf("%d\t",arr[i][j]); 
    }
    printf("\n");
}
printf("Enter elements of array B:\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        scanf("%d\t",&arr[i][j]);
    }
}
printf("array elements:\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
      sum[i][j]=x*arr[i][j]+y*arr[i][j];
    //   printf("%d\t",sum[i][j]);
    }
    // printf("\n");
    
}
printf(" after calculation\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
}