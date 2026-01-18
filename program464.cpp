#include <iostream>
using namespace std;

class Arithematic
{
    public :
    int no1;
    int no2;
    Arithematic(int a,int b)
    {
        no1=a;
        no2=b;
    }

    int Addition()
    {
        int Ans;
        Ans=no1+no2;
        return Ans;
    }
};
int main()
{
    Arithematic *obj = new Arithematic(11,10);
    cout<<"Addition is : "<<obj->Addition();
    delete obj;
   return 0;
}