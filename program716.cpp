#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char Arr[50]={'\0'};
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    printf("%s\n",Arr);
    return 0;
}