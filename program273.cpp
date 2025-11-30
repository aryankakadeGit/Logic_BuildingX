#include<iostream>
using namespace std;
template <class T>
T Maximum(T Arr[],int iSize)
{
    int iCnt=0;
    T iMax;
    iMax=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;

}
int main()
{
    float Brr[]={10.0f,20.0f,30.0f,40.0f,50.0f};
    float iRet=0.0f;
    iRet=Maximum(Brr,5);
    cout<<iRet;
    return 0;
} 