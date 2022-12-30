//Replace character in string
#include<stdio.h>
#include<string.h>
int main()
{
    int len=0,i;
    char s[40],c,r;
    printf("Enter original string:");
    gets(s);
    while(s[len]!='\0')
    len++;
    fflush(stdin);
    printf("Enter character to replace :");
    scanf("%c",&c);
    fflush(stdin);
    printf("Enter new character:");
    scanf("%c",&r);
    for(i=0;i<len;i++)
    {
        if(s[i]==c)
        {
            s[i]=r;
        }
    }
    puts(s);

}