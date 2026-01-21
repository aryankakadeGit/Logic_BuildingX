
#include <stdio.h>
#include <stdlib.h>
// #include<unistd.h>
#include <fcntl.h>
int main()
{
    int fd , iRet = 0;
    char FNAME[100]={'\0'};
    char Buffer[1024]={'\0'};
    int iCnt=0;
    int iCount=0;
    printf("Enter name of file :");
    scanf("%s",FNAME);
    fd=open(FNAME,O_RDWR);
    if(fd!=-1)
    {
        printf("File Successfully opened\n");
        printf("Data from file is :\n");
        while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
        {
            for(iCnt=0;iCnt<iRet;iCnt++)
            {
                if(Buffer[iCnt]=='A')
                {
                    iCount++;
                }
            }
        } 
        
        printf("Occurences of A : %d\n",iCount);
        close(fd);
    }
    else{
        printf("there is no such file");
    }
    return 0;
}
