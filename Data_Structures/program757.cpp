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

    bool BinarySearch(int iNo);
};
ArrayX::ArrayX(int no)
{
    cout<<"Inside Constructor\n";
    iSize=no;
    Arr = new int(iSize);
    sorted = true;
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
    cin>>Arr[iCnt];

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];
        if(Arr[iCnt-1]>Arr[iCnt])
        {
            sorted = false;
        }
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

bool ArrayX :: BinarySearch(int iNo)
{
    if (sorted == false)
    {
        return false;
    }
    
    int iStart = 0 , iEnd = 0 , iMid = 0 ;
    bool bFlag = false;
    iStart = 0 ;
    iEnd = iSize - 1 ;
    while(iStart<=iEnd)
    {
        iMid = (iStart + (iEnd-iStart))/2;
        if(Arr[iMid]==iNo)
        {
            bFlag = true;
            break;
        }
        else if(Arr[iMid]>iNo)
        {
            iEnd = iMid - 1;
        }
        else if (iNo>Arr[iMid])
        {
            iStart = iMid+1;
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

    // if(aobj.sorted == true)
    // {
    //     cout<<"Array is sorted\n";
    // }
    // else
    // {
    //     cout<<"Array is not sorted\n";
    // }
     
    if(aobj.BinarySearch(25))
    {
        cout<<"Element found \n";
    }
    else
    {
        cout<<"there is no such element\n";
    }
    return 0;
}