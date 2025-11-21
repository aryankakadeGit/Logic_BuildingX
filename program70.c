#include<stdio.h>

int SumDigits(int iNo)
{
   
    int iDigit=0;
    int iSum=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iSum=iSum+iDigit;
    }
    return iSum;

}
int main()
{
    int iRet=0;
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);
    iRet=SumDigits(iValue);
    printf("Total sum is : %d",iRet);
   
    return 0;
} 