#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iSize)
{
    int iCnt=0,iAvg=0,iSum=0;
    for(iCnt=0 ; iCnt<iSize ; iCnt++)
    {
       iSum+=Arr[iCnt];
    }
    return ((float)iSum/(float)iSize); //explicit typecast
}

int main()
{
    int iLength =0, iCnt=0;

    int *ptr=NULL;
    float iRet=0.0;
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
    iRet=Average(ptr,iLength);
    printf("Average numbers are  : %f",iRet);
    free(ptr);

    return 0 ;
}