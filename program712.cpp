#include <iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    static int iCnt = 1;
    if(iCnt<=iNo/2)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt;
        }
        iCnt++;    
        DisplayFactors(iNo);
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