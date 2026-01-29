#include<stdio.h>
int main()
{
    char str[80];
    char command[4][20];

    int iRet=0;
    int no1 =0;
    int no2=0;
    
    iRet=printf("Enter 2 numbers\n");
    scanf("%d%d",&no1,&no2);

    printf("First no : %d\n",no1);
    printf("Second no : %d\n",no2);

    return  0;
}