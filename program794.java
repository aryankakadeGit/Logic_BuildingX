import java.util.*;

class Matrix
{   
    public int iRow ;
    public int iCol ;
    public int Arr[] [] ;

    public Matrix(int a , int b)
    {
        this.iRow = a ;
        this.iCol = b ;
        Arr = new int[iRow] [iCol];
    }

    public void Accept()
    {
        int i ,j = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements of matrix");
        for(i=0 ; i<iRow ; i++)
        {
            System.out.println("Enter elements of row : "+(i+1));
            for(j=0 ; j<iCol ; j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
        sobj.close();
    }

    public void Display()
    {
        int i ,j = 0;
        System.out.println("Elements of matrix are :");
        for(i=0 ; i<iRow ; i++)
        {
            for(j=0 ; j<iCol ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int i ,j,iSum  = 0;
        System.out.println("Elements of matrix are :");
        for(i=0 ; i<iRow ; i++)
        {
            for(j=0 ; j<iCol ; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    public int Maximum()
    {
        int   i  = 0;
        int   j  = 0;
        int iMax = Arr[i][j];
        System.out.println("Elements of matrix are :");
        for(i=0 ; i<iRow ; i++)
        {
            for(j=0 ; j<iCol ; j++)
            {
                if(iMax<Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
    public int Minimum()
    {
        int   i  = 0;
        int   j  = 0;
        int iMin = Arr[i][j];

        System.out.println("Elements of matrix are :");
        for(i=0 ; i<iRow ; i++)
        {
            for(j=0 ; j<iCol ; j++)
            {
                if(iMin>Arr[i][j])
                {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin;
    }

    public float Average()
    {
        int iSum  = 0;
        System.out.println("Elements of matrix are :");
        iSum = Summation();
        return (float)iSum/(float)iRow*iCol;
    }
}

class program794
{
    public static void main(String[] args) 
    {
        int iRet = 0;
        Matrix mobj = new Matrix(4,4);   
        mobj.Accept();
        mobj.Display();
        System.out.println("Summation ="+mobj.Summation());
        System.out.println("Average ="+mobj.Average());
        System.out.println("Max ="+mobj.Maximum());
        System.out.println("Min ="+mobj.Minimum());

    }

}
