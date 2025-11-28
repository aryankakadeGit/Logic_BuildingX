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
    char chh='\0';
    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
    fflush(stdin);
    printf("Enter char : \n");
    scanf("%c",&chh);
    int iRet=0;
    iRet=CountOccurence(Arr,chh);
    printf("freq is: %d",iRet);
    return 0;
}