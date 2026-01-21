
#include <stdio.h>
#include <stdlib.h>
// #include<unistd.h>
#include <fcntl.h>
int main()
{
    int fd = 0;
    int iRet = 0;
    char Buffer[100] = {'\0'};
    char Arr[10] = {'\0'};
    fd = open("JanuaryX.txt", O_RDONLY);

    printf("file opened with fd %d\n", fd);
    iRet = read(fd, Buffer, 11);
    printf("Data from file is \n");
    printf("return value of Read is %d\n", iRet);

    close(fd);

    fd = open("JanuaryX.txt", O_RDONLY);
    iRet = read(fd, Arr, 10);
    printf("Data from file is \n");
    
    printf("return value of Read is %d", iRet);

    close(fd);

    return 0;
}
