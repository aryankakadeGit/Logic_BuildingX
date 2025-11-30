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
        int Substration()
        {
            int ans=0;
            ans=no1+-no2;
            return ans;
        }
};
int main()
{
    cout<<Addition(10,11);
    return 0;
} 