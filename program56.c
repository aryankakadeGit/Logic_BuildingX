#include <stdio.h>
#include <stdbool.h>
bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 2; (iCnt <= (iNo / 2)); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            break;          // optimization
        }
    }
    if (iCnt > iNo / 2)     // prime
    {
        return true;
    }
    else
    {                       // no prime
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number : \n");
    scanf("%d", &iValue);
    bRet = CheckPrime(iValue);
    if (bRet == true)
    {
        printf("%d is prime number", iValue);
    }
    else
    {
        printf("%d is not a prime number", iValue);
    }
    return 0;
}
// time complexity for prime = n/2
// for non prime either 1 or 2