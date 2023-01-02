//print n number of student data using structure
#include<stdio.h>

void main()
{

struct student{
    int rollno;
    char name[20];
};

 struct student s[10];
int i,n;
printf("How many student?");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("student %d:rollno and name",i);
    scanf("%d %s",&s[i].rollno,s[i].name);

}
printf("You have entered:\n");
for(i=0;i<n;i++)
{
    printf("student %d:rollno:%d name:%s\n",i,s[i].rollno,s[i].name);
}

}