#include<stdio.h>
#include<string.h>
void Display(char *str)
{
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    
}
int main()
{
    char Arr[50];
    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);
    Display(Arr);
    return 0;
}