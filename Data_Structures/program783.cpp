#include <iostream>
using namespace std;

#define INC_ORDER 1
#define DEC_ORDER 2

class ArrayX
{
public:
    int *Arr;
    int iSize;
    bool sorted;

    ArrayX(int no);
    ~ArrayX();

    void Accept();
    void Display();

    bool CheckSorted();
    void BubbleSortEffiecient();
    void BubbleSortEffiecientX(int ioption);
    void BubbleSort();
};
ArrayX::ArrayX(int no)
{
    cout << "Inside Constructor\n";
    iSize = no;
    Arr = new int(iSize);
    sorted = true;
}
ArrayX::~ArrayX()
{
    cout << "Inside Destructor\n";
    delete[] Arr;
}
void ArrayX::Accept()
{
    int iCnt = 0;
    cout << "Enter the elements\n " << endl;
    cin >> Arr[iCnt];

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
        if (Arr[iCnt - 1] > Arr[iCnt])
        {
            sorted = false;
        }
    }
    sorted = CheckSorted();
}
void ArrayX::Display()
{
    int iCnt = 0;
    cout << "ELements of array are : \n"
         << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}

bool ArrayX ::CheckSorted()
{
    int i = 0;
    bool bFlag = true;
    for (i = 0; i < iSize - 1; i++)
    {
        if (Arr[i] > Arr[i + 1])
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

void ArrayX ::BubbleSort()
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int pass = 0;
    int time = 0;
    if (sorted == true)
    {
        return;
    }
    time = 1;
    for (i = 0, pass = 1; i < iSize - 1; i++, pass++)
    {
        for (j = 0; j < iSize - 1 - i; j++, time++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
        cout << "\ndata after pass : " << i + 1 << "\n";
        Display();
    }
    cout << "No of passes for bubble sort : " << pass << "\n";
    cout << "No of iterations for bubble sort : " << time << "\n";
    sorted = true;
}

// 21 15 18 16 11
void ArrayX ::BubbleSortEffiecient()
{
    int i = 0;
    int j = 0;
    int temp = 0;
    bool bFlag = false;
    // if(sorted==true)
    // {
    //     return;
    // }
    bFlag = true;
    for (i = 0; (i < iSize - 1) && (bFlag == true); i++)
    {
        bFlag = false;
        for (j = 0; j < iSize - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
                bFlag = true;
            }
        }
        cout << "\ndata after pass : " << i << "\n";
        Display();
    }
    sorted = true;
}

// 1 : Increasing , 2 : Decreasing
void ArrayX ::BubbleSortEffiecientX(int ioption = INC_ORDER)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    bool bFlag = false;
    if (ioption < 1 && ioption > 2)
    {
        cout << "Invalid Option for sorting \n";
        cout << "1 : Increasing\n";
        cout << "2 : Decreasing\n";
        return;
    }
    // if(sorted==true)
    // {
    //     return;
    // }
    bFlag = true;

    if (ioption == INC_ORDER)
    {
        for (i = 0; (i < iSize - 1) && (bFlag == true); i++)
        {
            bFlag = false;
            for (j = 0; j < iSize - 1 - i; j++)
            {
                if (Arr[j] > Arr[j + 1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;
                    bFlag = true;
                }
            }
            cout << "\ndata after pass : " << i << "\n";
            Display();
        }
    }
    else if (ioption == DEC_ORDER)
    {
        for (i = 0; (i < iSize - 1) && (bFlag == true); i++)
        {
            bFlag = false;
            for (j = 0; j < iSize - 1 - i; j++)
            {
                if (Arr[j] < Arr[j + 1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;
                    bFlag = true;
                }
            }
            cout << "\ndata after pass : " << i << "\n";
            Display();
        }
    }
    sorted = true;
}

int main()
{
    int iValue = 0;
    cout << "Enter no of elements \n"<< endl;
    cin >> iValue;
    ArrayX aobj(iValue);
    aobj.Accept();

    cout << "Data before sorting\n";
    aobj.Display();

    // 1 : Increasing , 2 : Decreasing
    aobj.BubbleSortEffiecientX(DEC_ORDER);

    cout << "Data after sorting\n";
    aobj.Display();

    return 0;
}

