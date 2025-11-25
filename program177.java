  /* input : 8
 output:1   A   3   B   5   C   7   D
*/
import java.util.Scanner;
class pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        //int i=97;
        char ch ='A';
        for(iCnt=1 ; iCnt<=iNo ; iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.printf("%c\n",ch);
                ch++;
            }
            else
            {
                System.out.printf("%d\n",iCnt);
            }
        }
        System.out.println();
        
    }
}
class program177
{
    public static void main(String[] args) {
        int iValue=0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter frequency :");
        iValue=sobj.nextInt();        
        
        pattern pobj = new pattern();
        pobj.Display(iValue);

    }

    
}
