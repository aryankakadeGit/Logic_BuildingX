#include<stdio.h>
#include<string.h>
int Count(char str[])
{
    int iCount=0;
    while(*str!='\0'){
        if((*str=='e')||(*str=='a')||(*str=='o')||(*str=='i')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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
    printf("Vowels are: %d",iRet);
    return 0;
}