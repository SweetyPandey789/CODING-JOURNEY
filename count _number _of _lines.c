//count characters,words and line
#include<stdio.h>
int main()
{
    char s[30];
    int words=0,newline=0,character=0;
    printf("Enter string:");
    scanf("%[^~]",&s);//scanf formatting
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            words++;
        }
        else if(s[i]=='\n')
        {
            newline++;
        }
        else if(s[i]=='\n')
        {
            newline++;
            words++;
        }
        else if(s[i]!=' '&& s[i]!='\n')
        {

        character++;
        }

    }
    if(character>0)
    {
        words++;
        newline++;
    }
    printf("total number of words:%d\n",words);
    printf("total number of lines:%d\n",newline);
    printf("total number of characters:%d\n",character);
} 