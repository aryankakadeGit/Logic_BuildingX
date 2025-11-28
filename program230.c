#include<stdio.h>
#include<string.h>
void CountAll(char str[])
{
    int iCount1=0;
    int iCount2=0;
    while(*str!='\0'){
        if((*str>='A'&&*str<='Z'))
        {
             iCount1++;
        }
        else 
        {
             iCount2++;
        }
        str++;
    }
    printf("Capital are %d and small are %d",iCount1,iCount2);   
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
   
   
    
    CountAll(Arr);
    
    return 0;
}