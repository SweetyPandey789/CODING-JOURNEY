//write a programm to find largest number using Dynamic Memory Allocation
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    int n;
    int *data;
    printf("Enter the total number of elements.");
    scanf("%d",&n);
    data=(int *)calloc(n,sizeof(int));
    if(data==NULL)
    {
        printf("Error!memory not allocated");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d",i+1);
        scanf("%d",data);
    }
    for(int i=0;i<n;i++)
    {
        if(*data<*(data+i))
        {
            *data=(*data+i);
        }
    }
    printf("Largest number= %d",*data);
    free(data);
 }