#include<iostream>
using namespace std;

class ArrayX
{
    public :
    int *Arr;
    int iSize;

    ArrayX(int no);
    
    ~ArrayX();
    
    void Accept();
    
    void Display();
    
    bool LinearSearch(int iNo);
    
    bool BidirectionalSearch(int iNo);
};
ArrayX::ArrayX(int no)
{
    cout<<"Inside Constructor\n";
    iSize=no;
    Arr = new int(iSize);
}
ArrayX::~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}
void ArrayX:: Accept()
{
    int iCnt=0;
    cout<<"Enter the elements "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
}
void ArrayX:: Display()
{
    int iCnt=0;
    cout<<"ELements of array are : "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
}
bool ArrayX:: LinearSearch(int iNo)
{
    int i = 0;
    bool bFlag = false;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

bool ArrayX:: BidirectionalSearch(int iNo)
{
    int iStart = 0;
    int iEnd = 0;
    bool bFlag = false;
    for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
    {
        if(Arr[iStart]==iNo || Arr[iEnd]==iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    cout<<"Enter no of elements "<<endl;
    cin>>iValue;
    ArrayX aobj(iValue);
    aobj.Accept();
    aobj.Display();
    if(aobj.LinearSearch(21))
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }

    if(aobj.BidirectionalSearch(21))
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is not present \n";
    }
     
    return 0;
}