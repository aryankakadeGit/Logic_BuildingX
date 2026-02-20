// Input = 5
// Output = 12345

#include <iostream>
using namespace std;
int CountDigits(int iNo)
{
    static int iCnt = 0;
    if(iNo != 0)
    {
        iCnt++;
        CountDigits(iNo/10);
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    int iRet=CountDigits(iValue);
    cout<<"Digits :"<<iRet;
    cout<<"\n";
    return 0;
}