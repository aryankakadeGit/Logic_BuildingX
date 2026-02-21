#include<stdio.h>
#include <iostream>
using namespace std;
int StrlenX(char * str)
{
    int iCount = 0;
    while(*str!='\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{   
    char Arr[50]={'\0'};
    int iRet=0;
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    iRet=StrlenX(Arr);
    printf("length : %d",iRet);    
    return 0;
}