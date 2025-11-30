//OOP Approach (GENERIC)
#include<iostream>
using namespace std;
template <class T>
class Arithematic
{
    public :
        T no1;
        T no2;
        Arithematic(T a,T b)
        {
            no1=a;
            no2=b;
        }
        int Addition()
        {
            T ans=0;
            ans=no1+no2;
            return ans;
        }
        int Substraction()
        {
            T ans=0;
            ans=no1-no2;
            return ans;
        }
};
int main()
{
    Arithematic <int> aobj1(11,10); 
    Arithematic <double> aobj2(101.5,50.5); 
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<endl; 
    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction();
    return 0;
} 