
#include <iostream>
using namespace std;
void DisplayDigits(int iNo)
{
    if(iNo != 0)
    {
        DisplayDigits(iNo/10);
        cout<<iNo<<"\n";
    }
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    DisplayDigits(iValue);
    //cout<<"Digits :"<<iRet;
    cout<<"\n";
    return 0;
}