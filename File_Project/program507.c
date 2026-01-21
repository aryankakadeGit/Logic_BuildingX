#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    fd=open("January.txt",O_RDWR | O_CREAT);// 777 RWE for all
    if(fd==-1)
    {
        printf("FILE NOT OPENED.....");
    }  
    else
    {
        write(fd,"Jay Ganesh",3);
        printf("File gets Successfully OPENED with fd %d",fd);
        close(fd);
    }

    return 0;
}
