#include<stdio.h>
#include<string.h>
int strlenX(char str[])
{
    int iCount=0;
    while(*str!='\0'){
            iCount++;
            str++;
    }
    return iCount;
   
    
}
int main()
{
    char Arr[50]={'\0'};
    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
    int iRet=0;
    iRet=strlenX(Arr);
    printf("String length is : %d",iRet);
    return 0;
}