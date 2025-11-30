#include<iostream>
using namespace std;

double Maximum(double no1,double no2)
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
    double dValue1=10.0,dValue2=11.0,dRet=0.0;
    

    
    dRet=Maximum(dValue1,dValue2);
    cout<<"Maximum is : "<<dRet<<endl;

    return 0;
} 