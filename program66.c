//iteration
#include<stdio.h>
int main()
{
    int iNo=0;
    int iDigit=0;
    printf("Enter number :");
    scanf("%d",&iNo);
    printf("---------------------------------------------\n");
    printf("Original Value of iNo is : %d\n",iNo);
    printf("---------------------------------------------\n");
    
    while(iNo!=0)
    {
        iDigit=iNo%10; 
        printf("iDigit is : %d\n",iDigit);
        iNo=iNo/10;
        printf("iNo is : %d\n",iNo);
    }
       


    printf("---------------------------------------------\n");
    
    return 0;
}