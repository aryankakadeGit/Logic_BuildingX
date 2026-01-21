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
    printf("Data from file is %s\n", Buffer);
    printf("return value of Read is %d\n", iRet);

    iRet = read(fd, Arr, 10);
    printf("Data from file is %s\n", Arr);
    printf("return value of Read is %d", iRet);

    close(fd);

    return 0;
}
// read & 
// not closing file will have offset
// at same position.