// Input = 5
// Output = 12345

#include <iostream>
using namespace std;
int CountDigits(int iNo)
{
    int iCnt = 0;
    while(iNo != 0)
    {
        iCnt++;
        iNo/=10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    int iRet=CountDigits(iValue);
    cout<<iRet;
    cout<<"\n";
    return 0;
}