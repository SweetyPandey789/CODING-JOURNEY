//Check the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int i,j,flag=0;
    printf("Enter word");
    gets(name);
    for(i=0,j=strlen(name)-1;i<strlen(name)/2;i++,j--)
    {
    if(name[i]!=name[j])
    {
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        printf("\npalindrome");
    }
    else{
        printf("not palindrome");
        
    }
}