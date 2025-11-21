import java.util.*;
class Digit{
    public void DisplayDigit(int iNo)
    {
        int iDigit=0;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            System.out.println(iDigit);
            iNo=iNo/10;
        }

    }
}
class program90 {
    public static void main(String[] args) {
        int iValue=0;
        int iDigit=0;

        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();
        
        Digit dobj=new Digit();
        dobj.DisplayDigit(iValue);
       
        //important
        sobj=null;
        dobj=null;
        System.gc();
    }    
}
