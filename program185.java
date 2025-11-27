 /* iRow :5
   iCol :5
*       *       *       *       *
*                               *
*                               *
*                               *
*       *       *       *       *
*/
import java.util.Scanner;
class pattern
{
    public void Display(int iRow , int iCol)
    {
        int i=0;
        int j=0;
        
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if(i==1||j==1||i==iRow||j==iCol)
                {
                   System.out.print("*\t");
                }
                else{
                    System.out.print(" \t");
                }
            }
            System.out.println();
        }
    }
}
class program185
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
