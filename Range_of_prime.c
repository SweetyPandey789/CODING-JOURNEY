# include<stdio.h>
int main()
{int n1,n2,i,j;
    printf("Enter range value");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
    for(j=2;j<=i;j++)
    {
if(i%j==0)
break;
    }

if(i==j)
printf("Prime number=%d\n",j);}
return 0;
}