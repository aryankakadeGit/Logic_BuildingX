#include<stdio.h>
void StrcatX(char *src,char *dest)
{
    while(*dest!='\0')
    {
        dest++;
    }
    while(*src !='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest=*src;
}
int main()
{
    char Arr[50];
    char Brr[50];
    printf("Enter the Source String : \n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the Destination String : \n");
    scanf(" %[^'\n']s",Brr);
    StrcatX(Arr,Brr);
    printf("Updated String : %s\n",Brr);

    return 0;
}