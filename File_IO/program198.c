#include<stdio.h>
#include<fcntl.h>
int main()
{
    unlink("PPA.txt");//unistd lib
    return 0 ;
}