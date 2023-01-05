//write a progrsm to print ascending and descending order in an array
# include<stdio.h>
int main()
{

    int n,arr[10],tmp[10],i,j,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter value of %d elemnts:",i+1);
    scanf("%d",&arr[i]);
tmp[i]=arr[i];
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(i=0,j=n-1;i<n;i++,j--)
{
    printf("%d\t%d\t%d\n",tmp[i],arr[i],arr[j]);
}
printf("\n");
}