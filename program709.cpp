#include <iostream>
using namespace std;
int CountDigits(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum=iSum+(iNo%10);
        CountDigits(iNo/10);
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    int iRet=CountDigits(iValue);
    cout<<"sum :"<<iRet;
    cout<<"\n";
    return 0;
}