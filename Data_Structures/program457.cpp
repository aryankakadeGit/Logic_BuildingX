#include<iostream>
using namespace std;
int Addition(int no1,int no2)
{
    int Ans;
    Ans=no1+no2;
    return Ans;
}
int main()
{
    int i,j=0;
    int iRet=0;
    cout<<"Enter number first : \n";
    cout<<"Enter number second : \n";
    iRet=Addition(i,j);
    cout<<"Addition is : "<<iRet<<"\n";
    return 0;
}