# include<stdio.h>
int main()
{
    int m[10],del,i,j,n;
    printf("How many elements?");
    scanf("%d",&n);
    printf(" Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("Enter number for delete: ");
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(m[i]==del)
        break;
    }
    for(j=i;j<n;j++)
    {
        m[j]=m[j+1];
    }
    n--;
    printf("After deletion: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",m[i]);

    }
}