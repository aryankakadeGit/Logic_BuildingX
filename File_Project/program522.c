
#include <stdio.h>
#include <stdlib.h>
// #include<unistd.h>
#include <fcntl.h>
int main()
{
    int fd , iRet = 0;
    char FNAME[100]={'\0'};
    char Buffer[1024]={'\0'};

    printf("Enter name of file :");
    scanf("%s",FNAME);
    fd=open(FNAME,O_RDWR);
    if(fd!=-1)
    {
        printf("File Successfully opened\n");
        printf("Data from file is :\n");
        while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
        {
            //write(1,Buffer,iRet);
            printf("iRet is %d\n",iRet);
        } 
        printf("\n");
        close(fd);
    }
    else{
        printf("there is no such file");
    }
    return 0;
}
