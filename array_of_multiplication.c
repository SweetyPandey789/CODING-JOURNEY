//Create an array of multiplication table of 7 upto 10(7x1....7x10).
//use realloc to make it store 15 numbers.
#include<stdio.h>
#include<stdlib.h>
void print_table(int range,int num)
{
    int row=range,col=3;int i,k;
     
     int arr[row][col];
    for( k=0;k<row;k++)
    {
        arr[k][0]=num;
        arr[k][1]=k+i;
        arr[k][2]=arr[k][1]*arr[k][0];
    }
    for( i=1;i<row;i++)
    {

        printf("%d*%d=%d",arr[i][0],arr[i][1],arr[i][2]);
        printf("\n");
    }
    
}
int main()
{
    int *ptr;
    int range=10;
    int num=7;
    // ptr=(int *)realloc(ptr,7*sizeof(int));
    print_table(range,num);
    return 0;
    }