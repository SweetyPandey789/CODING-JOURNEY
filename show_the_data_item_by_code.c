# include<stdio.h>
void main()
{
struct detail{
int code;
char name[20];
int quantity;

};

    int n;
struct  detail s[20];
printf("How many elements?");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("details %d:code,name,quantity",i);
scanf("%d %s %d",&s[i].code,s[i].name,&s[i].quantity);
}
for(int i=0;i<n;i++)
{
    printf("details:%d code=%d name=%s quantity=%d\n",i,s[i].code,s[i].name,s[i].quantity);
}
}