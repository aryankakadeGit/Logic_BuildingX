#include<stdio.h>
void StrcpyX(char *src,char *dest)
{
    
    while(*src !='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}
int main()
{
    char Arr[50];
    char Brr[50];
    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);
    StrcpyX(Arr,Brr);
    printf("Copied String : %s\n",Brr);

    return 0;
}