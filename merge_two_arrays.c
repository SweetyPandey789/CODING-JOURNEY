#include<stdio.h>
int main()
{
    
    int m=5,n=4,i,j;
  int ans = m+n;
    int arr1[40];
    int arr2[30];
    int c[ans];
    printf("Enter elements of array 1:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);

    }
    printf("Enter element of array 2:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<m;i++)
    {
        c[i]=arr1[i];
    }
    for(int i=0,j=m;j<ans && i<n;i++,j++)
    {
        c[j]=arr2[i];
    }
    printf("Merge two array:");
    for(int i=0;i<ans;i++)
    {
        printf("%d\t",c[i]);
    }
return 0;
}