#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    fd=open("LB.txt",O_RDWR);// 777 RWE for all
    if(fd==-1)
    {
        printf("FILE NOT OPENED.....");
    }  
    else
    {
        printf("File gets Successfully OPENED with fd %d",fd);
    }
    return 0;
}
