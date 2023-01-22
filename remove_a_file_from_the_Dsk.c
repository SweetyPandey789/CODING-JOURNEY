//write a program in c to remove a file from the disk
#include<stdio.h>
void main()
{
    int status;
    char fname[10];
    printf("Remove a file from the disk\n");
    printf("Enter the name");
    scanf("%s",fname);
    status=remove(fname);
    if(status==0)
    {
        printf("file is deleted successfully");
    }
    else{
        printf("file is unable to delete");
    }
}
