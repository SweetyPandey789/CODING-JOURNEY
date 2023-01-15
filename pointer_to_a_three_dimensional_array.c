//pointer to a 3 Dimensional array
#include<stdio.h>
int main()
{
    char  arr[5][7][6];
    char (*p)[5][7][6]= & arr;
    printf("%d\n",*p);
    printf("%d\n",(&arr+1)-&arr);
    printf("%d\n",(char *)(&arr+1)-(char *)&arr);

}