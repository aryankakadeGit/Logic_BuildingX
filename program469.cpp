#include <iostream>
using namespace std;

template <class T>
class Arithematic
{
public:
    T no1;
    T no2;
    Arithematic(T a, T b);

    T Addition();

    T Substraction();
};

template <class T>
Arithematic<T>::Arithematic(T a, T b)
{
    no1 = a;
    no2 = b;
}

template <class T>
T Arithematic<T>::Addition()
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

template <class T>
T Arithematic<T>::Substraction()
{
    T Ans;
    Ans = no1 - no2;
    return Ans;
}

int main()
{
    //Arithematic <int> iobj(11, 10);
    Arithematic <int>* iobj=new Arithematic<int>(11,10);
    cout << "Addition is : " << iobj->Addition()<<endl;
    cout << "Substraction is : " << iobj->Substraction()<<endl;

    //Arithematic <double> dobj(11.8967, 10.4567);
    Arithematic <double>* dobj=new Arithematic<double>(11.56778,10.5678);
    cout << "Addition is : " << dobj->Addition()<<endl;
    cout << "Substraction is : " << dobj->Substraction()<<endl;
    
    delete iobj;
    delete dobj;
    
    return 0;
}