#include<stdio.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    char FileName[20];
    printf("Enter file name that you want to open : \n");
    scanf("%s",FileName);
    
    fd=open(FileName,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File Successfully Opened with fd %d\n",fd);
    }
    close(fd);//unistd
    
    return 0 ;
}