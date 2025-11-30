#include<iostream>
using namespace std;
template <class T>
int Maximum(int no1,int no2)
{
    if(no1>no2)
    {
        return no1;
    }
    else{
        return no2;
    }
}
int main()
{
    int iValue1=10,iValue2=11,iRet=0;
    

    
    iRet=Maximum(iValue1,iValue2);
    cout<<"Maximum is : "<<iRet<<endl;

    return 0;
} 