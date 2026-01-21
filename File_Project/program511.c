#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    int iRet=0;
    char Arr[]="PUNE";
    fd=open("JanuaryX.txt",O_RDWR);
    if(fd==-1)
    {
        printf("FILE NOT OPENED.....");
    }  
    else
    {
        iRet=write(fd,Arr,3);
        printf("%d bytes written on file \n",iRet);
        printf("File gets Successfully OPENED with fd %d",fd);
        close(fd);
    }

    return 0;
}
