#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
//O(N)
int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=0; //unable to handle negative value

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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
    iRet = Maximum(iPtr,iLength);
    printf("%d is Maximum in data\n ",iRet);
    

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}