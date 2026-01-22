#include <iostream>
using namespace std;

template<class T>
class ArrayX
{
public:
    T *Arr;
    T iSize;

    ArrayX(T);
    
    ~ArrayX();
    
    void Accept();
    
    void Display();
    
    T Addition();

    T Maximum();
    int Frequency(T);
    
};

template<class T>
ArrayX <T>:: ArrayX(T no)
{
    cout << "Inside Constructor\n";
    iSize = no;
    Arr = new T(iSize);
}
template<class T>
ArrayX<T> :: ~ArrayX()
{
    cout << "Inside Destructor\n";
    delete[] Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
    int iCnt = 0;
    cout << "Enter the elements " << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

template<class T>
void ArrayX<T>::Display()
{
    int iCnt = 0;
    cout << "ELements of array are : " << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << endl;
}

template<class T>
T ArrayX <T>:: Addition()
{
    T iSum = 0;
    int iCnt = 0;
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

template<class T>
T ArrayX<T>::Maximum()
{
    T iMax=0;
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

template<class T>
int ArrayX<T>:: Frequency(T iNo)
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
    ArrayX <int>*aobj = new ArrayX<int>(iValue); // Dynamic
    aobj->Accept();
    aobj->Display();
    cout << "Addition of all elements is : " << aobj->Addition() << endl;
    cout << "Maximum of all elements is : " << aobj->Maximum() << endl;
    cout << "Frequency of element is : " << aobj->Frequency(11) << endl;
    delete aobj;
    return 0;
}