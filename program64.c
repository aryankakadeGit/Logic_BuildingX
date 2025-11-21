
// code to demonstrate need of loop
#include<stdio.h>
int main()
{
    int iNo=723614;
    int iDigit=0;

    printf("---------------------------------------------\n");
    printf("Original Value of iNo is : %d\n",iNo);
    printf("---------------------------------------------\n");
    

    iDigit=iNo%10; 
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

    printf("---------------------------------------------\n");


    iDigit=iNo%10; 
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);
    printf("---------------------------------------------\n");


    iDigit=iNo%10; 
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);
    printf("---------------------------------------------\n");

    iDigit=iNo%10; 
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

    printf("---------------------------------------------\n");

    iDigit=iNo%10; 
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);

     printf("---------------------------------------------\n");

    iDigit=iNo%10; 
    printf("iDigit is : %d\n",iDigit);
    iNo=iNo/10;
    printf("iNo is : %d\n",iNo);
    printf("---------------------------------------------\n");
    
    return 0;
}