// Input = 5
// Output = 12345

#include<iostream>
using namespace std;
void Display(int iNo)
{
    while(iNo>0)
    {
        cout<<iNo<<"\t";
        iNo--;
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