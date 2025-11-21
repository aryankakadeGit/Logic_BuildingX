#include <stdio.h>
void CountFactorsNonFactors(int iNo)
{
    int iCnt=0;
    int iFrequency1=0;
    int iFrequency2=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;(iCnt<(iNo));iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }
    printf("No of Factors are %d\n",iFrequency1);
    printf("No of Non Factors are %d\n",iFrequency2);

}
int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d", &iValue );
    CountFactorsNonFactors(iValue);
    return 0;
}