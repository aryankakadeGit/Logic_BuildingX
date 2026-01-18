#include<iostream>
using namespace std;
double Addition(double no1,double no2)
{
    double Ans;
    Ans=no1+no2;
    return Ans;
}
int main()
{
    double i,j=0.0;
    double iRet=0.0;
    cout<<"Enter number first : \n";
    cin>>i;

    cout<<"Enter number second : \n";
    cin>>j;
    iRet=Addition(i,j);
    cout<<"Addition is : "<<iRet<<"\n";
    return 0;
}