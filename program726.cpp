#include<stdio.h>
#include <iostream>
using namespace std;
void StrDisplayX(char * str)
{
    while(*str!='\0')
    {
        cout<<*str<<"\n";
        str++;
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