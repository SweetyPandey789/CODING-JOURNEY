//Write an array dynaically capable of storing 5 integer.
//using realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    printf("Enter the elements of array of size 5:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);

    }
    printf("The value of array of size 5 is:");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }
    ptr=realloc(ptr,10*sizeof(int));
    printf("\nEnter the elemets of array size 10:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d\t",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;

}