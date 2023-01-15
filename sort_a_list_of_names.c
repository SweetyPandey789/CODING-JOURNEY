//Write a program to print the code to sort the list of names in alphabetical __ORDER_
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100][100],temp[40];
    int count;
    printf("How many names?");
    scanf("%d",&count);
    printf("Enter %d names below\n",count);
    for(int i=0;i<count;i++)
    {
fflush(stdin);//fflush function in C is used to immediately flush outhe contents of an output stream
printf("enter the name to be sorted:%d\n",i+1);
gets(name[i]);
    }
for(int i=0;i<count;i++)
{
    for(int j=0;j<count-i-1;j++)
    {
        if(strcmp(name[j],name[j+1])>0)
        {
            strcpy(temp,name[j]);
            strcpy(name[j],name[j+1]);
            strcpy(name[j+1],temp);
        }
    }
}
printf("name of the student sorted:");
for(int i=0;i<count;i++)
{
    puts(name[i]);
}

}
