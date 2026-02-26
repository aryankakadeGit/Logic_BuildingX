#include<stdio.h>
#include <iostream>
using namespace std;
void StrDisplayX(char * str)
{
    if(*str!='\0')
    {
        cout<<str<<"\n";
        StrDisplayX(str+1);       
        cout<<str<<"\n";
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