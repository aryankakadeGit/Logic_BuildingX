//OOP Approach
#include<iostream>
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
            int ans=0;
            ans=no1+no2;
            return ans;
        }
        int Substraction()
        {
            int ans=0;
            ans=no1-no2;
            return ans;
        }
};
int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(101,50);
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction(); 
    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction();
    return 0;
} 