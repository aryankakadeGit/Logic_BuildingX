#include<stdio.h>
#include <iostream>
using namespace std;
void StrDisplayX(char * str)
{
    int iCount = 0;
    while(*str!='\0')
    {
        str++;
        iCount++;
    }
    str--;
    
    while(iCount>=0)
    {
        cout<<*str<<"\n";
        str--;
        iCount--;
    }
}
int main()
{   
    char Arr[50]={'\0'};
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    StrDisplayX(Arr);
    return 0;
}