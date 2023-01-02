//print student data using structure
#include<stdio.h>
struct student {
    int rollno;
    char name[20];
};
void main()
{
struct student s1,s2;
printf("Enter rollno and name for first student:");
scanf("%d %s",&s1.rollno,s1.name);
printf("Enter rollno and name for second student:");
scanf("%d %s",&s2.rollno,s2.name);
printf("student1:%d\t%s\n",s1.rollno,s1.name);
printf("student2:%d\t%s\n",s2.rollno,s2.name);
}