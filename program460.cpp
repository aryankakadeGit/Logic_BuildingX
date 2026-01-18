#include <iostream>
using namespace std;
int Addition(int no1, int no2)
{
    int Ans;
    Ans = no1 + no2;
    return Ans;
}
int main()
{
    float i, j = 0.0f;
    float iRet = 0.0f; 
    cout << "Enter number first : \n";
    cin >> i;

    cout << "Enter number second : \n";
    cin >> j;

    iRet = Addition(i, j);
    cout << "Addition is : " << iRet << "\n";
    return 0;
}