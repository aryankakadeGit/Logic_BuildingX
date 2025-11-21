#include<stdio.h>

int CountDigits(int iNo)
{

    int iDigit=0;
    int iCount=0;
    
    while(iNo!=0)
    {
        iDigit=iNo%10; 
        iNo=iNo/10;
        iCount++;
    }
    return iCount;

}
int main()
{
    int iRet=0;
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet=CountDigits(iValue);
    printf("Total digits are : %d",iRet);
   
    return 0;
} 