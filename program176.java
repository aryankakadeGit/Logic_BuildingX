  /* input : 5
 output:A   B   C   D   E
 ASCII: 61  62  63  64  65
*/
import java.util.Scanner;
class pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        //int i=97;
        char ch ='A';
        for(iCnt=1 ; iCnt<=iNo ; iCnt++,ch++)

        {
            System.out.printf("%c\n",ch);
        }
        System.out.println();
        
    }
}
class program176
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
