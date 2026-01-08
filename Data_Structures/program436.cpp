#include<iostream>
using namespace std;

class Arithmatic
{
    private :
    int No1;
    int No2;
    
    public :

    Arithmatic(int A,int B);

    int Addition();
    int Substraction();
    
};
//errors
Arithmatic::Arithmatic(int A,int B) // classname :: constructorname
{
    this ->No1=A;
    this ->No2=B;
}

/*
Returnvalue Classname :: FunstionName()
*/
int Arithmatic::Addition()
{
    return No1+No2;
}

int Arithmatic::Substraction()
{
    return No1-No2;
}
    

int main()
{
    Arithmatic aobj(11,10);
    cout<<aobj.Addition()<<endl;;
    cout<<aobj.Substraction()<<endl;
    return 0;
}