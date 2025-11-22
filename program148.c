#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
//O(N)
void Update(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        Arr[iCnt]++;
    }
}
int main()
{
    int iLength = 0;
    int iCnt = 0 ;
    
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
    Update(iPtr,iLength);
    printf("%d Updated data is : \n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }
    

    //step 3 : Free the memory
    free(iPtr);
    return 0;
}