import java.util.*;
class program819{
    public static boolean CheckStrong(int iNo)
    {
        int sum  = 0;
        int idigit = 0;
        int temp = iNo;
        //               0,1,2,3, 4, 5,  6,  7,   8,     9
        int FactArr[] = {1,1,2,6,24,120,720,5040,40320,362880}; 
        while(iNo!=0) 
        {
            idigit = iNo % 10;
            sum = sum+FactArr[idigit];
            iNo  = iNo/10;
        }
        return(sum==temp);
    }
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();        
        boolean bRet = false; 
        bRet = CheckStrong(iNo); 
        if(bRet)
        {
            System.out.println(iNo+" is Strong number");
        }
        else{
            System.out.println(iNo+" is Not a strong number");
        }    
        sobj.close();

    }
}