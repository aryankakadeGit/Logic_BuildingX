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

    public float Average()
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
        return (iRow*iCol)/iSum;
    }
}

class program791
{
    public static void main(String[] args) 
    {
        int iRet = 0;
        Matrix mobj = new Matrix(4,4);   
        mobj.Accept();
        mobj.Display();
        System.out.println("Summation ="+mobj.Summation());
        System.out.println("Average ="+mobj.Average());

    }

}
