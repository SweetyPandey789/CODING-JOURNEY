#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char ch,fname1[20],fname2[20];
    printf("Copy a file in another name:");
    printf("--------------------");
    printf("Input the source file name");
    scanf("%s",fname1);
    fp=fopen(fname1,"r");
    if(fp==NULL)
    {
        printf("input the new file name:");
        scanf("%s",fname2);
    }
    
}