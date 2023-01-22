//write a program in c to find the size of a given file
#include<stdio.h>
int filesize(char fn[]){
    FILE *fp=fopen(fn,"r");
    if(fp==NULL)
    {
        printf("FILE not found");
        return -1;
    }
fseek(fp,0L,SEEK_END);
int res=ftell(fp);
fclose(fp);
return res;

}
int main()
{
    char fn[]={"sikha.txt"};
    int result=filesize(fn);
    if(result!=-1)
    printf("size of the file is %d bytes",result);
    return 0;
}