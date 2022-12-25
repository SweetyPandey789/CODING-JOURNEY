//write a program to insert an element in array
# include<stdio.h>
int main()
{
    int m[10],ins,i,n,pos;
    printf("How many elemwnts");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    printf("Enter number to be inserted:\n");
    scanf("%d",&ins);
    printf("Enter the position:\n");
    scanf("%d",&pos);
    for(i=n;i>pos;i--)
    {
        m[i]=m[i-1];

    }
    m[pos]=ins;
    n++;
    printf("Array after insertion :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",m[i]);
    }
}