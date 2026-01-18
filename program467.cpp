#include <iostream>
using namespace std;

template <class T>
class Arithematic
{
public:
    T no1;
    T no2;
    Arithematic(T a, T b)
    {
        no1 = a;
        no2 = b;
    }

    T Addition()
    {
        T Ans;
        Ans = no1 + no2;
        return Ans;
    }

    T Substraction()
    {
        T Ans;
        Ans = no1 - no2;
        return Ans;
    }
};
int main()
{
    Arithematic <int> iobj(11, 10);
    cout << "Addition is : \n" << iobj.Addition();
    cout << "Substraction is : \n" << iobj.Substraction();

    Arithematic <double> dobj(11.8967, 10.4567);
    cout << "Addition is : \n" << dobj.Addition();
    cout << "Substraction is : \n" << dobj.Substraction();
    return 0;
}