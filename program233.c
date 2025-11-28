#include<stdio.h>//0-9 57-48 range
#include<string.h>
int CountDigits(char str[])
{
    int iCount1=0;
    
    while(*str!='\0'){
        if((*str>='0'&&*str<='9'))
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
      
    int iRet=CountDigits(Arr);
    printf("Digits are :%d \n",iRet);

    
    return 0;
}