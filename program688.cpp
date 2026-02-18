// Input = 5
// Output = 12345

#include<iostream>
using namespace std;
void Display(int iNo)
{
    int iCnt=1;
    while(iCnt<=iNo)
    {
        cout<<iCnt<<"\t";
        iCnt++;
    }
    cout<<"\n";
}
int main()
{
    int iValue=0;
    cout<<"Enter number ";
    cin>>iValue;
    Display(iValue);
    return 0 ;
}