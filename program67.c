#include<stdio.h>

void DisplayDigits(int iNo)
{

    int iDigit=0;
    printf("---------------------------------------------\n");
    printf("Original Value of iNo is : %d\n",iNo);
    printf("---------------------------------------------\n");
    
    while(iNo!=0)
    {
        iDigit=iNo%10; 
        printf("iDigit is : %d\n",iDigit);
        iNo=iNo/10;
        printf("iNo is : %d\n",iNo);
    }
       


    printf("---------------------------------------------\n"); 
}
int main()
{
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
   
    return 0;
}