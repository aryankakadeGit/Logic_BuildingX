import java.util.*;
public class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2!=0)
            {
                System.out.print("#\t");
            }else
            {
                System.out.print("*\t");
            }
        }
        System.out.println();
        
    }
}
class program155{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        int iValue=0;
        
        System.out.println("Enter the value");
        iValue=sobj.nextInt();
        Pattern pobj=new Pattern();
        pobj.Display(iValue);    
        
    }
} 
    

