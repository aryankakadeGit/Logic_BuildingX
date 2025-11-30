#include<iostream>
using namespace std;
template <class T>
int FindOccurance(T Arr[],int iSize,T no)
{
    int iCnt=0;
    int iCount;
    iCount=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==no)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    float Brr[]={10.0f,20.0f,30.0f,40.0f,50.0f,20.2f};
    int iRet=0;
    
    iRet=FindOccurance(Brr,5,20.2f);
    cout<<"Number occurence"<<iRet;
    return 0;
} 