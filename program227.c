#include<stdio.h>
#include<string.h>
int CountSmall(char str[])
{
    int iCount=0;
    while(*str!='\0'){
        if((*str>=97&&*str<=122))
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
    //fflush(stdin); //Not applicable on all os 
   
    int iRet=0;
    iRet=CountSmall(Arr);
    printf("Small freq is: %d",iRet);
    return 0;
}