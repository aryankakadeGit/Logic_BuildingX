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

    bool CheckSorted();
    void BubbleSort();
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

void ArrayX :: BubbleSort()
{  
    int i =0 ;
    int j =0;
    int temp =0;
    if(sorted==true)
    {
        return ;
    }
    for(i=0;i<iSize-1;i++)
    {
        for(j=0 ; j<iSize-1-i ; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
    sorted = true;
}

int main()
{
    int iValue=0;
    cout<<"Enter no of elements \n"<<endl;
    cin>>iValue;
    ArrayX aobj(iValue);
    aobj.Accept();
    
    cout<<"Data before sorting\n";
    aobj.Display();
    aobj.BubbleSort();
    cout<<"Data after sorting\n";
    aobj.Display();
    
    return 0;
}