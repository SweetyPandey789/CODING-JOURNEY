#include<stdio.h>
int main()
{
    //Write a program to print how many times a number present in an array
    int arr[100],n,i,item,count=0,a[100];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element you want to search:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            a[count]=i+1;
            count++;
        }
    }
    if(count!=0)
    {
        printf("item found at\n");
        for(i=0;i< count;i++)
        {
            printf("%d\n ",a[i]);
        }
    }
    else
    {
        printf("\n item not found ");
    }


}