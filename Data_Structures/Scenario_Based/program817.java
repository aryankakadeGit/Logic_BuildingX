import java.util.*;
class program817{
    public static boolean CheckStrong(int iNo)
    {
        int sum  = 0;
        int idigit = 0;
        int temp = iNo;
        int Fact = 0; 
        int i = 0;
        while(iNo!=0) 
        {
            idigit = iNo % 10;
            for(i = 1,Fact = 1;i<=idigit;i++)
            {
                Fact= Fact*i;
            }                    
            sum = sum+Fact;

            iNo  = iNo/10;
        }
        if(sum==temp)
        {
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();        
        boolean bRet = false; 
        bRet = CheckStrong(iNo); 
        if(bRet==true)
        {
            System.out.println(iNo+" is Strong number");
        }
        else{
            System.out.println(iNo+" is Not a strong number");
        }    
        sobj.close();

    }
}