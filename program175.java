  /* input : 5
 output:a   b   c   d    e
 ASCII: 97  98  99  100  101
*/
import java.util.Scanner;
class pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        //int i=97;
        char ch ='a';
        for(iCnt=1 ; iCnt<=iNo ; iCnt++,ch++)

        {
            System.out.printf("%c\t",ch);
        }
        System.out.println();
        
    }
}
class program175
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
