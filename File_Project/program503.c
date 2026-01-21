#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    fd=creat("LB.txt",0777);// 777 RWE for all
    if(fd==-1)
    {
        printf("FILE NOT CREATED.....");
    }  
    else
    {
        printf("File gets Successfully created with fd %d",fd);
    }
    return 0;
}
