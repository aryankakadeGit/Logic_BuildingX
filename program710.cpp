#include <iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt;
        }
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