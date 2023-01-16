//Write a program to dynamically create an array of size 6 capable of storing 6 integers
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int i,len=0;
printf("Enter the size of array:");
scanf("%d",&len);
ptr=(int *)malloc(len*sizeof(int));
printf("Enter the elements:\n");
for(i=0;i<len;++i)
{
    scanf("%d",&ptr[i]);

}
printf("Array elements are \n");
for(i=0;i<len;i++)
{
    printf("%d\t",ptr[i]);
}
free(ptr);
return 0;
}