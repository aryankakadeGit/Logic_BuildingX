import java.util.*;
class Number{
    public int CalculateFactorial(int iNo)
    {

        int i , iFact = 1;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        //reverse loop
        for(i=1; i<=iNo ;i++)
        {
            iFact*=i;
        }
        return(iFact);
        
    }
}
//End of Number class
class program87 {
    public static void main(String[] args) {
        int iValue=0;
        int iRet=0;

        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();
        Number nobj=new Number();
        iRet=nobj.CalculateFactorial(iValue);
        System.out.println("Factorial is :" + iRet);
        //important
        sobj=null;
        nobj=null;
        System.gc();
    }    
}
