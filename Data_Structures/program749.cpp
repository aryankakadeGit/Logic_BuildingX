#include<iostream>
using namespace std;

class ArrayX
{
    public :
    int *Arr;
    int iSize;
    
    ArrayX(int no)
    {
        cout<<"Inside Constructor\n";
        iSize=no;
        Arr = new int(iSize);
    }
    ~ArrayX()
    {
        cout<<"Inside Destructor\n";
        delete [] Arr;
    }
    void Accept()
    {
        int iCnt=0;
        cout<<"Enter the elements "<<endl;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        int iCnt=0;
        cout<<"ELements of array are : "<<endl;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
    }

};

int main()
{
    int iValue=0;
    cout<<"Enter no of elements "<<endl;
    cin>>iValue;
    ArrayX aobj(iValue);
    aobj.Accept();
    aobj.Display();
    
    return 0;
}