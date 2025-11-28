#include <stdio.h> 
void ReplaceEle(char str[])
{
    

    while (*str != '\0')
    {
        if ((*str == 'a'))
        {
            *str='_';
        }

        str++;
    }
}
    
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^\n]s", Arr);

    ReplaceEle(Arr);
    printf("%s \n",Arr);
    

    return 0;
}