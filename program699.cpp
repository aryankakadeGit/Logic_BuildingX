// Input = 5
// Output = 12345

#include <iostream>
using namespace std;
void Display(int iNo)
{
    if (iNo > 0)
    {
        cout << iNo << "\t";
        Display(iNo-1);
        cout << iNo << "\t";
    }
    
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    Display(iValue);
    cout<<"\n";
    return 0;
}