/*Take name and salary of two employees as input from the user and write them to a text file in the following format
name 1,3300
name 2,5000 */
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char name[20];
    int age;
    float salary;
    fp=fopen("employee.txt","w");
    if(fp==NULL)
    {
        printf("Invalid entry");
        return;
    }
    printf("Enter the name:\n");
    scanf("%s",name);
    fprintf(fp,"name=%s",name);
    printf("Enter the salary");
    scanf("%d",&salary);
    fprintf(fp,"salary=%f",salary);
    fclose(fp);

    }