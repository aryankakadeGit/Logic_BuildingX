#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[] , int iSize)
{
    int iCnt=0,iCount=0;
    for(iCnt=0 ; iCnt<iSize ; iCnt++)
    {
        if(Arr[iCnt]%2==1)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int iLength =0, iCnt=0;

    int *ptr=NULL;
    int iRet=0;
    printf("ENter no of elements : \n");
    scanf("%d",&iLength); 

    ptr=(int *)malloc(iLength*sizeof(int));
    if( NULL== ptr) //industrial way of coding
    {
        printf("Unable to alllocate memory");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=CountOdd(ptr,iLength);
    printf("Odd numbers are  : %d",iRet);
    free(ptr);

    return 0 ;
}