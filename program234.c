#include<stdio.h>//0-9 57-48 range
#include<string.h>
int CountSpaces(char str[])
{
    int iCount1=0;
    
    while(*str!='\0'){
        if((*str==' '))
        {
             iCount1++;
        }
        
        str++;
    }
return iCount1;

}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
      
    int iRet=CountSpaces(Arr);
    printf("Spaces are :%d \n",iRet);

    
    return 0;
}