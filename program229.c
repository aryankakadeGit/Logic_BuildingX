#include<stdio.h>
#include<string.h>
int CountSmall(char str[])
{
    int iCount=0;
    while(*str!='\0'){
        if((*str>='A'&&*str<='Z'))
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
    iRet=CountSmall(Arr);
    printf("Capital freq is: %d",iRet);
    return 0;
}