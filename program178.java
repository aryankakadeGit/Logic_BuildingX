/* 
input : 8
output: z     y     x     w     v     u     t    s
*/
import java.util.Scanner;
class pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        //int i=97;
        char ch ='z';
        for(iCnt=1 ; iCnt<=iNo ; iCnt++)
        {
            System.out.printf("%c\t",ch);
            ch--;
        }
        System.out.println();
    }
}
class program178
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
