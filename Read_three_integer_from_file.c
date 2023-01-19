//Write a program to read three integer from file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    int num;
    fp=fopen("integer.txt","r");
    if(fp==NULL)   
    {
        printf("\n cannot open file");
        exit(1);
    }
    fscanf(fp,"%d",&num);
    printf("Number= %d",num);
    fclose(fp);
return 0;

}