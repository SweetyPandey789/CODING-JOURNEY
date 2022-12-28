#include<stdio.h>
int main()
{
//find maximum and minimum number from an array
int num[10],i,max=0,min=num[0],n;
printf("How many elements \n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);
    if(num[i]>max)

        max=num[i];
    if(num[i]<min)
    
        min=num[i];
}
printf("maximum value=%d\nminimum value=%d",max,min);
return 0;
}