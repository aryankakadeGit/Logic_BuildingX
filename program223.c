#include<stdio.h>
#include<string.h>
int CountOccurence(char str[],char chh)
{
    int iCount=0;
    while(*str!='\0'){
        if((*str==chh))
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
    iRet=CountOccurence(Arr,'a');
    printf("freq is: %d",iRet);
    return 0;
}