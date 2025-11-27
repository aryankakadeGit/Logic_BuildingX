 /* iRow :4 
   iCol :4
    a   b   c   d
    1   2   3   4
    a   b   c   d
    1   2   3   4
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
            char ch='\0';
            for(j=1,ch='a';j<=iCol;j++,ch++)
            {
                if(i%2==0)
                {
                   System.out.printf("%d\t",j);
                }
                else{
                    System.out.printf("%c\t",ch);
                }
            }
            System.out.println();
        }
    }
}
class program182
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
