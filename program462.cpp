#include <iostream>
using namespace std;
template<class T>
T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}
int main()
{
    cout<<"Addition of characters "<<Addition('a','b')<<endl;
    cout<<"Addition of Integers "<<Addition(11,10)<<endl;
    cout<<"Addition of Float "<<Addition(1.2f,3.2f)<<endl;
    cout<<"Addition of Double "<<Addition(78.67234567,45.345678)<<endl;
    return 0;
}