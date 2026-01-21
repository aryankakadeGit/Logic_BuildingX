
#include <stdio.h>
#include <stdlib.h>
// #include<unistd.h>
#include <fcntl.h>
int main()
{
    int fd , iRet = 0;
    char FNAME[100]={'\0'};
    
    printf("Enter name of file :");
    scanf("%s",FNAME);
    fd=open(FNAME,O_RDWR);
    if(fd!=-1)
    {
        printf("File Successfully opened");
        close(fd);
    }
    else{
        printf("there is no such file");
    }
    return 0;
}
