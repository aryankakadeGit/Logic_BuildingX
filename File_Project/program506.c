#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    fd=open("PPA.txt",O_RDWR);// 777 RWE for all
    if(fd==-1)
    {
        printf("FILE NOT OPENED.....");
    }  
    else
    {
        write(fd,"Jay Ganesh",10);
        printf("File gets Successfully OPENED with fd %d",fd);
        close(fd);
    }

    return 0;
}
