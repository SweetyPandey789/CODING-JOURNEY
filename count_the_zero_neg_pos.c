//Count number of negative,positive and zero element
#include<stdio.h>
int main()
{
    int m[10],i,pos=0,neg=0,zero=0,n;
    printf("How many numbers?");
    scanf("%d",&n);
    printf("%d integer elements\n",n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        scanf("%d",&m[i]);
        if(m[i]>0)
        pos++;
        else if(m[i]<0)
        neg++;
        else
        zero++;}
        printf("positive elements %d\n",pos);
        printf("negative elements %d\n",neg);
        printf("Zero elements %d\n",zero);
    }

