
#include <stdio.h>
#include <stdlib.h>
// #include<unistd.h>
#include <fcntl.h>
int main()
{
    int fdsrc , fddest, iRet = 0;
    char FSRC[100]={'\0'};
    char FDEST[100]={'\0'};
    char Buffer[1024]={'\0'};
    int iCnt=0;
    int iCount=0;
    printf("Enter name of source file :");
    scanf(" %s",FSRC);    
    

    printf("Enter name of file :");
    scanf(" %s",FDEST);
    fdsrc=open(FSRC,O_RDONLY);
    if(fdsrc==-1)
    {
        printf("Unable to open source file");
        return -1;
    }
    fddest=creat(FDEST,0777);
    if(fddest==-1)
    {
        printf("Unable to creat destination file");
        return -1;
    }
    
    close(fdsrc);
    close(fddest);
    return 0;
}
