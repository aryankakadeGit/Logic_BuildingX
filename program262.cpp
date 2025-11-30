#include<iostream>
using namespace std;
template <class T>
T Add(T no1,T no2)
{
    T ans;
    ans=no1+no2;
    return ans;
}
int main()
{
    int iValue1=10,iValue2=11,iRet=0;
    
    iRet=Add(iValue1,iValue2);

    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}  