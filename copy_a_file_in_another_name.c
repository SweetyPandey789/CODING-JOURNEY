#include<stdio.h>
#include<stdlib.h>
 int main()
{
    FILE *fp,*fp1,*fp2;

    char filename[100],c;
    printf("Copy a file in another name:");
    printf("--------------------");
    printf("Input the source file name");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp1==NULL)
    {
        printf("input the new file name:");
        exit(0);
    }
    fp=fopen(filename,"w");
    if(fp2==NULL)
    {
        printf("cannot open file %s\n",filename);
        exit(0);
    }
    c=fgetc(fp);
    while(c!=EOF)
    {
        fputc(c,fp2);
        c=fgetc(fp1);
    }
    printf("\n contents copied to %s",filename);
    fclose(fp1);
    fclose(fp2);
    return 0;
    
}