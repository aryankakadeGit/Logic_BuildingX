#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr;
    int iSize;

    ArrayX(int no);
    
    ~ArrayX();
    
    void Accept();
    
    void Display();
    
    int Addition();

    int Maximum();
    int Frequency(int no);
    
};

ArrayX :: ArrayX(int no)
{
    cout << "Inside Constructor\n";
    iSize = no;
    Arr = new int(iSize);
}
ArrayX :: ~ArrayX()
{
    cout << "Inside Destructor\n";
    delete[] Arr;
}
void ArrayX::Accept()
{
    int iCnt = 0;
    cout << "Enter the elements " << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}
void ArrayX::Display()
{
    int iCnt = 0;
    cout << "ELements of array are : " << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << endl;
}
int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int ArrayX::Maximum()
{
    int iMax=0;
    int iCnt=0;
    iMax=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}
int ArrayX:: Frequency(int iNo)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCount;
        }
    }

}

int main()
{
    int iValue = 0;
    cout << "Enter no of elements " << endl;
    cin >> iValue;

    // ArrayX aobj(10); Static
    ArrayX *aobj = new ArrayX(iValue); // Dynamic
    aobj->Accept();
    aobj->Display();
    cout << "Addition of all elements is : " << aobj->Addition() << endl;
    cout << "Maximum of all elements is : " << aobj->Maximum() << endl;
    cout << "Frequency of element is : " << aobj->Frequency(11) << endl;
    delete aobj;
    return 0;
}