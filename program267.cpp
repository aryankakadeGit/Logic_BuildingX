#include<iostream>
using namespace std;
template <class T>
T Maximum(T no1,T no2,T no3)
{
    if(no1>no2 && no1>no3)
    {
        return no1;
    }
    else if(no2>no1 && no2>no3){
        return no2;
    }
    else{
        return no3;
    }
}
int main()
{
    double dValue1=10.0,dValue2=11.0,dValue3=13.0,dRet=0.0;
    

    
    dRet=Maximum(dValue1,dValue2,dValue3);
    cout<<"Maximum is : "<<dRet<<endl;

    return 0;
} 