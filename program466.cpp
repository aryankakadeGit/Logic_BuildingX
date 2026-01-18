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
    Arithematic <int> obj(11, 10);
    cout << "Addition is : /n" << obj.Addition();
    cout << "Substraction is : /n" << obj.Substraction();
    return 0;
}