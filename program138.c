#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int * IPTR;
//O(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           iCount++;
           break;
        }
    }
    if(iCount>0)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iLength = 0;
    int iCnt = 0;
    bool bRet =false ;
    int iValue=0;
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);
    IPTR iPtr=NULL;

    //step 1 : Allocate the memory 
    iPtr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("ENter the values : ");
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    printf("Enter number To Search : ");
    scanf("%d",&iValue);
    //step 2 : Use the memory
    bRet = LinearSearch(iPtr,iLength,iValue);
    if(bRet==true)
    {
        printf("%d is Present in data ",iValue);

    }
    else
    {
        printf("%d is not Present in data ",iValue);
    }

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}