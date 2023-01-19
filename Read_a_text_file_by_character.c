//Write a program to read a text file character by character andwrite its content twice in a separate file 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[30];
    FILE *fp=NULL;
    fp=fopen("sikha.txt","r");
    fscanf(fp,"%s",&str);
    printf("Reading text from text from txt file and the text is:\n");
    printf("\nwriting content from separate file*");
    char str2[100]="This is a world of programming";
    fp=fopen("sikha1.txt","a");
    fprintf(fp,"%d",&str2);
    printf("reading a text file %s",str2);
    return 0;
}