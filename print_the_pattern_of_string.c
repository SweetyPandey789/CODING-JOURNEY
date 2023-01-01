#include<stdio.h>
int main()
{
    char ch[40];
    printf("Enter the word you want to format:>>");
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
        printf("%c\t",ch[j]);
        }
        printf("\n");
    }
}