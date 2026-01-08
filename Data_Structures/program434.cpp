#include<iostream>
using namespace std;

class Arithmatic
{
    private :
    int No1;
    int No2;
    
    public :
    Arithmatic(int A,int B)
    {
        this ->No1=A;
        this ->No2=B;
    }

    int Addition()
    {
        return No1+No2;
    }

    int Substraction()
    {
        return No1-No2;
    }

    
};


int main()
{
    Arithmatic aobj(11,10);
    cout<<aobj.Addition()<<endl;;
    cout<<aobj.Substraction()<<endl;
    return 0;
}