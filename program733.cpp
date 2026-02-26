#include <iostream>
using namespace std;
int Display(int Brr[],int iSize)
{
    static int iCnt=0;
    static int iSum=0;
    while(iCnt<iSize)
    {
        iSum+=iCnt ;
        iCnt++;
    }
    return iSum;
}
int main()
{   
    int Arr[]={10,20,30,40,50};
    int iRet=Display(Arr,5);
    cout<<iRet;
    return 0;
}