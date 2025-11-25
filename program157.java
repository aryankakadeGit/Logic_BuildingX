import java.util.*;
public class Pattern
{
    public void Display(int iNo)
    {
        int iCnt=0;
        for(iCnt=-iNo;iCnt<0;iCnt++)
        {
            System.out.print(iCnt+"\t");   
        }
        System.out.println();
        
    }
}
class program157{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        int iValue=0;
        
        System.out.println("Enter the value");
        iValue=sobj.nextInt();
        Pattern pobj=new Pattern();
        pobj.Display(iValue);    
        
    }
} 
    

