#include<stdio.h>
#include<string.h>
void sortstr(char[34]);
int main()
{
    char str[80];
    printf("Enter a string");
    gets(str);
    sortstr(str);
    printf("%s",str);
    }

    void sortstr(char s[])
    {
    char temp;
    int i,j;
    for(i=0;i<strlen(s)-1;i++)
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]>s[j])
            {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
    }
    
}

