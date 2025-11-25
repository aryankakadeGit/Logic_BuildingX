 /* iRow :4 
   iCol :4
    a   b   c   d
    e   f   g   h   
    i   j   k   l
    m   n   o   p
*/
import java.util.Scanner;
class pattern
{
    public void Display(int iRow , int iCol)
    {
        int i=0;
        int j=0;
        char ch='a';
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++,ch++)
            {
                System.out.printf("%c\t",ch);
            }
            System.out.println();
        }
    }
}
class program179
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
