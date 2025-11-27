 /* iRow :6
   iCol :6
*       #       #       #       #       #
*       *       #       #       #       #
*       *       *       #       #       #
*       *       *       *       #       #
*       *       *       *       *       #
*       *       *       *       *       *
*/
import java.util.Scanner;
class pattern
{
    //filter for square matrix

    public void Display(int iRow , int iCol)
    {
        int i=0;
        int j=0;
        if(iRow!=iCol)
        {
            System.out.println("invalid input");
            System.out.println("row no and column no should be same");
            return;
        }
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            { 
                if(i==j)
                {
                    System.out.printf("%%\t");//update
                }
                else if(i>j)
                {
                    System.out.print("*\t");
    
                }
                else{
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
    }
}
class program192
{
    public static void main(String[] args) {
        int iValue1=0;
        int iValue2=0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows :");
        iValue1=sobj.nextInt();        
        System.out.println("Enter number of columns :");
        iValue2=sobj.nextInt();
        pattern pobj = new pattern();
        pobj.Display(iValue1,iValue2);

    }

    
}
