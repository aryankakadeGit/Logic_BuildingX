import java.util.*;
class Number{
    public long CalculateFactorial(int iNo)
    {
        int i ;
        long iFact = 1;//important
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
class program88 {
    public static void main(String[] args) {
        int iValue=0;
        long iRet=0;

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
