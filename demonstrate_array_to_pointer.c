//Demostrate array to pointer
# include<stdio.h>
int main()
{
    int n,i;
    int *a[n];
    printf("Enter the size of array:");
    scanf("%d",&n);
    int b[n];    
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    a[i]=&b[i];
    printf("print the elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*a[i]);
        
    }
    return 0;
}