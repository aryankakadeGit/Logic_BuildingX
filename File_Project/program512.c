#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    int iRet=0;
    char Arr[]="Maharashatra";
    fd=open("JanuaryX.txt",O_RDWR|O_APPEND);
    if(fd==-1)
    {
        printf("FILE NOT OPENED.....");
    }  
    else
    {
        iRet=write(fd,Arr,11);
        printf("%d bytes written on file \n",iRet);
        printf("File gets Successfully OPENED with fd %d",fd);
        close(fd);
    }
    return 0;
}
