#include <iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    int iCnt = 1;
    while(iCnt<=iNo/2)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt;
        }
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    DisplayFactors(iValue);
    cout<<"\n";
    return 0;
}