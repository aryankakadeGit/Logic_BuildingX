// Input = 5
// Output = 12345

#include <iostream>
using namespace std;
void Display(int iNo)
{
    if (iNo > 0)
    {        
        Display(--iNo);
        cout << iNo << "\t";
    }
    else
    {
        cout << "\n";
    }
}
int main()
{
    int iValue = 0;
    cout << "Enter number ";
    cin >> iValue;
    Display(iValue);
    return 0;
}