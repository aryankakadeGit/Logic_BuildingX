#include<stdio.h>
#include<string.h>
int Count(char str[])
{
    int iCount=0;
    while(*str!='\0'){
        if(*str=='A'||*str=='a')
        {
             iCount++;
        }
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
    iRet=Count(Arr);
    printf("String char A count is : %d",iRet);
    return 0;
}