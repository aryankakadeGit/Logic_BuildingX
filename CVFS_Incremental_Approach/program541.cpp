#include<stdio.h>
int main()
{
    char str[80]="India is my country";
    char command[4][20];
    int iRet=0;
    iRet=sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3]);
            //Accept from , part  , in what
    printf("Return value : %d\n",iRet);
    printf("%s \n",command[0]);
    printf("%s \n",command[1]);
    printf("%s \n",command[2]);
    printf("%s \n",command[3]);
    
    return  0;
}