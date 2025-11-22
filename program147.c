#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
//O(N)
int Minimum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=0;
    for(int iMin=Arr[0],iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iLength = 0;
    int iCnt = 0 , iRet=0 ;
    
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

    printf("ENter the values : \n");
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    
    //step 2 : Use the memory
    iRet = Minimum(iPtr,iLength);
    printf("%d is Minimum in data\n ",iRet);
    

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}