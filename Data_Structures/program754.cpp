#include<iostream>
using namespace std;

class ArrayX
{
    public :
    int *Arr;
    int iSize;
    bool sorted;

    ArrayX(int no);
    
    ~ArrayX();
    
    void Accept();
    
    void Display();
    
    bool LinearSearch(int iNo);
    
    bool BidirectionalSearch(int iNo);

    bool CheckSorted();
};
ArrayX::ArrayX(int no)
{
    cout<<"Inside Constructor\n";
    iSize=no;
    Arr = new int(iSize);
    sorted = false;
}
ArrayX::~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}
void ArrayX:: Accept()
{
    int iCnt=0;
    cout<<"Enter the elements\n "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];
    }
    sorted = CheckSorted();
}
void ArrayX:: Display()
{
    int iCnt=0;
    cout<<"ELements of array are : \n"<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
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

bool ArrayX :: CheckSorted()
{
    int i = 0 ;
    bool bFlag = true ;
    for( i = 0 ; i<iSize-1 ; i++)
    {
        if(Arr[i]>Arr[i+1])
        {
            bFlag= false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    cout<<"Enter no of elements \n"<<endl;
    cin>>iValue;
    ArrayX aobj(iValue);
    aobj.Accept();
    aobj.Display();
    // if(aobj.LinearSearch(21))
    // {
    //     cout<<"Element is present \n";
    // }
    // else
    // {
    //     cout<<"Element is not present \n";
    // }

    // if(aobj.BidirectionalSearch(21))
    // {
    //     cout<<"Element is present \n";
    // }
    // else
    // {
    //     cout<<"Element is not present \n";
    // }

    if(aobj.sorted == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }
     
    return 0;
}